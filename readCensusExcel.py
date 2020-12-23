"""Reading Data from a Spreadsheet
Say you have a spreadsheet of data from the 2010 US Census and you have the boring task of going through its thousands of rows to count both the total population and the number of census tracts for each county.
In this project, we’ll write a script that can read from the census spreadsheet file and calculate statistics for each county in a matter of seconds.

This is what this program does:

1.Reads the data from the Excel spreadsheet
2.Counts the number of census tracts in each county
3.Counts the total population of each county
4.Prints the results"""

import openpyxl, pprint
print("Opening workbook...")
wb = openpyxl.load_workbook('censuspopdata.xlsx')
sheet = wb['Population by Census Tract']
countyData = { }
for i in range(2, sheet.max_row + 1):
	tract = sheet['B'+str(i)].value
	state = sheet['B'+str(i)].value
	county = sheet['C'+str(i)].value
	population = sheet['D' + str(i)].value
	countyData.setdefault(state,{})
	countyData[state].setdefault(county,{'tracts':0,'population':0})
	countyData[state][county]['tracts'] += 1
	countyData[state][county]['population'] += int(population)
print("Reading Rows...")
#print(countyData)
#print(countyData['AK'])
