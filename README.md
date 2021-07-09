## Parsing a continuous stream of data from a file

### Generating packets and writing them to a file
- Set the number of packets using rand()
- Selects the symbol code for the package name. The name of the package is set by the pattern "FF FF", where F is the selected symbol.
- Sets the size of the packet data
- Data is randomly generated
#### All packets go in a monolithic flow one after another and are separated by a space.
#### The stream is written to a file

### Parsing data from a file to a list
#### Fields:
- Name
- Length
- Data
