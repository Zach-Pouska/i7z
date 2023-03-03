# i7z - Instant 7-Zip
> I made this program entirely just to let me extract zip files faster. All it does is run the 7-zip command to auto-extract to a new folder. Maybe one day I'll make it delete the old zip file after it's done extracting, but probably not.



# Setup
1. Download exe or compile yourself using something like `g++`
2. Set exe file as the default program windows uses to open zip files, instead of 7zip.
  1. Right click on any .zip file
  2. go to `Open with       >`
  3. `Choose another app`
  4. Check `Always use this app to open .zip files`
  5. Click `More apps ↓`
  6. Scroll to the bottom and select `Look for another app on this PC`
  7. Navigate to the directory you downloaded / compiled the executable, and select it.


# To-do
- [ ] This could probably be done with a .bat file, or programmed in C without all of the extra c++ template library bloat. Basically could just be optimized more.
