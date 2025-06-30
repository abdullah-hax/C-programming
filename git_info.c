
/*

stage, stash, main, origin main egulo sbgulo .git (git database) er folder

untracked = ekebare new file , ja git kkno dekeni
unstaged = age stage e patano hoyecilo , pore file ti modify kora hoyece , tai file ti k abr stage e patate hbe, ekn file ti unstaged.

*************************
git pull kno lage?
=> kkno kkno emn hte pare j github(remote) e kisu commit ache jegulo local e nai(tumi github e kisu add krle or
tumar team member github e kisu add krlo or tumar onno device teke github e kisu add krle prottek khettrei
tumar local e sei commitgulo thakbena ) tkn git pull die segulo local e ante hbe noile tumi kno file kei
commit krte parbena(ortat remote e commit krte parbena)


for successful "git pull origin main --rebase"
-------------------------------------------------------------------------

working directory full clean thakte hbe ortat every file commited takte hbe.
example : jdi kno unstaged file thake tak staged kore commit kre felte hbe then "git pull origin main --rebase"
           git add .
           git commit -m "commited for git pull (rabase)"
           git pull origin main --rebase
        or,
           git stash   (file gulo safetyr jnno stash e cole jabe bolte paro invisible commit)
           git pull origin main --rebase
           git stash pop (must)

        // pop = restore + stash dlt

    ## jdi untracked file thake tahle commit kre clean krte hbena successful git pull hbe , karon untracked file k git cineina

********************************************************

*/