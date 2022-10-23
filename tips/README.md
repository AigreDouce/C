# Git Memo

## Steps to save and push the code to github

* Edit files

* "Stage" the modifications
```bash
git add .
```

* "Commit" the staged modifications
```bash
git commit -m "<my comment explaining the modification>"
```

* "Push" the commits to the central repository
```bash
git push
```

* in case the locale branch doesn't exist yet on the central repository, we have to create it.

```bash
git push --set-upstream origin <name of my branch>
```
