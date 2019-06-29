[![Build Status](https://travis-ci.org/LucasFonsecadosSantos/Turbo-Fire.svg?branch=master)](https://travis-ci.org/LucasFonsecadosSantos/Turbo-Fire)
[![star this repo](http://githubbadges.com/star.svg?user=LucasFonsecaDosSantos&repo=Turbo-Fire&style=flat)](https://github.com/LucasFonsceaDosSantos/Turbo-Fire)
[![fork this repo](http://githubbadges.com/fork.svg?user=LucasFonsecaDosSantos&repo=Turbo-Fire&style=flat)](https://github.com/LucasFonsecaDosSantos/Turbo-Fire/fork)
[![GitHub version](https://badge.fury.io/gh/LucasFonsecaDosSantos%2FTurbo-Fire.svg)](https://badge.fury.io/gh/LucasFonsecaDosSantos%2FTurbo-Fire)
[![Open Source Love](https://badges.frapsoft.com/os/v3/open-source.svg?v=102)](https://github.com/LucasFonsecaDosSantos/Turbo-Fire/)
[![Open Source Love](https://badges.frapsoft.com/os/gpl/gpl.svg?v=102)](https://github.com/LucasFonsecaDosSantos/Turbo-Fire/)

# Turbo Fire
###### A distributed denial of service attack simulaton tool.

## About this project
The Turbo Fire is a network stress test tool that simulates a distributed denial of service attack. It provides the whole DDOS operation and generates a complete report with a lot of essential informations to tester professional.

## Geting Started
You will need to install all system requirements to edit and change any 
parts of this project. The following are listed all requirements.

## System Requirements
- Shell Bash
- Make
- ...

## How to use
In first step, enter the directory:
```
$ cd Turbo-Fire/
```

## Project Structure
cooming soon

#### Directories List
|   Directory Name           | Content                                       |
|:---------------------------|:----------------------------------------------|
| docs                       | Storages all generated documentations.        |
| build                      | Storages the turbo fire exec object.          |
| src                        | Storages all source codes.                    |
| include                    | Header files.                                 |
| src/util                   | Util application mechanisms.                  |
| src/protocol               | Contains the classes related with protocols.  |
| src/app                    | Contains the main.                            |
| src/view                   | Contains the user interface.                  |
| src/parser                 | Contains all parsers implementation.          |
| src/exception              | Contains all turbo fire exceptions.           |

#### Classes List
|   Class Name               | Function                                      |   Header File                    |
|:---------------------------|:----------------------------------------------|:---------------------------------|
| Master                     | The master turbo fire version.                | app/master.hpp                   |
| Zombie                     | The zombie turbo fire version.                | app/zombie.hpp                   |
| Gui                        | Implements the user interface communication.  | view/gui.hpp                     |
| Validate                   | Implements a validation mechanism.            | util/validate.hpp                |
| AttackPattern              | Implements the user interface communication.  | protocol/attack_pattern.hpp      |
| ProtocolType               | Contains a enum for attack pattern info orgn. | protocol/protocol_type.hpp       |
| Parser                     | Contains a util parser implementation.        | parser/parser.hpp                |
| Token                      | Contains a parser token.                      | parser/token.hpp                 |
| NotRouteableIPException    | Not routeable IP address range.               | exception/not_routeable_ip_ex.hpp|
| NotValidArgumentException  | Not valid command argument exception.         | exception/not_valid_argume_ex.hpp|
| IPOutOfRangeException      | Not valid IP Address exception.               | exception/ip_out_of_range_exc.hpp|

## Version Control Documentation
This topic explains how the project version control in this repository 
works.

#### Sign List
|   Commit type              | Sign                                          |
|:---------------------------|:----------------------------------------------|
| Initial commit             | :tada: `:tada:`                               |
| Version tag                | :bookmark: `:bookmark:`                       |
| New feature                | :sparkles: `:sparkles:`                       |
| Bugfix                     | :bug: `:bug:`                                 |
| Metadata                   | :card_index: `:card_index:`                   |
| Documentation              | :books: `:books:`                             |
| Documenting source code    | :bulb: `:bulb:`                               |
| Performance                | :racehorse: `:racehorse:`                     |
| Cosmetic                   | :lipstick: `:lipstick:`                       |
| Tests                      | :rotating_light: `:rotating_light:`           |
| Adding a test              | :white_check_mark: `:white_check_mark:`       |
| General update             | :zap: `:zap:`                                 |
| Improve format/structure   | :art: `:art:`                                 |
| Refactor code              | :hammer: `:hammer:`                           |
| Removing code/files        | :fire: `:fire:`                               |
| Continuous Integration     | :green_heart: `:green_heart:`                 |
| Security                   | :lock: `:lock:`                               |
| Upgrading dependencies     | :arrow_up: `:arrow_up:`                       |
| Downgrading dependencies   | :arrow_down: `:arrow_down:`                   |
| Lint                       | :shirt: `:shirt:`                             |
| Translation                | :alien: `:alien:`                             |
| Text                       | :pencil: `:pencil:`                           |
| Critical hotfix            | :ambulance: `:ambulance:`                     |
| Deploying stuff            | :rocket: `:rocket:`                           |
| Fixing on MacOS            | :apple: `:apple:`                             |
| Fixing on Linux            | :penguin: `:penguin:`                         |
| Fixing on Windows          | :checkered_flag: `:checkered_flag:`           |
| Work in progress           | :construction:  `:construction:`              |
| Adding CI build system     | :construction_worker: `:construction_worker:` |
| Analytics or tracking code | :chart_with_upwards_trend: `:chart_with_upwards_trend:` |
| Removing a dependency      | :heavy_minus_sign: `:heavy_minus_sign:`       |
| Adding a dependency        | :heavy_plus_sign: `:heavy_plus_sign:`         |
| Docker                     | :whale: `:whale:`                             |
| Configuration files        | :wrench: `:wrench:`                           |
| Package.json in JS         | :package: `:package:`                         |
| Merging branches           | :twisted_rightwards_arrows: `:twisted_rightwards_arrows:` |
| Bad code / need improv.    | :hankey: `:hankey:`                           |
| Reverting changes          | :rewind: `:rewind:`                           |
| Breaking changes           | :boom: `:boom:`                               |
| Code review changes        | :ok_hand: `:ok_hand:`                         |
| Accessibility              | :wheelchair: `:wheelchair:`                   |
| Move/rename repository     | :truck: `:truck:`                             |
| Other                      | [Be creative](http://www.emoji-cheat-sheet.com/)  |
Standart documentation based on: [Emoji List](https://gist.github.com/parmentf/035de27d6ed1dce0b36a)

#### Control Task List
The poject tasks that should be developed.

- [ ] Project Requirements.
- [x] Update the README.
- [ ] Code review.

Source code implementation
**View package**
- [x] GUI implementation.
- [x] GUI documentation.
**Protocol package**
- [ ] AttackPattern implementation.
- [x] AttackPattern documentation.
**Factory package**
- [ ] AttackFactory implementation.
- [ ] AttackFactory documentation.
**DAO package**
- [ ] FileHandler implementation.
- [ ] FileHandler documentation.
**Exception**
- [ ] NotRouteableIPException implementation.
- [ ] NotRouteableIPException documentation.
- [ ] IPOutOfRangeException implementation.
- [ ] IPOutOfRangeException documentation.
- [ ] NotValidArgumentException implementation.
- [ ] NotValidArgumentException documentation.
**Parser**
- [ ] Parser documentation.
- [x] Parser implementation.
- [ ] Token documentation.
- [x] Token implementation.
**Util**
- [x] Validate implementation.
- [x] Validate documentation.
**App**
- [ ] Master implementation.
- [ ] Master documentation.
- [ ] Zombie implementation.
- [ ] Zombie documentation.

#### How to Contribute
-

## Authors
* **Lucas Fonseca dos Santos** - *Computer Science student of Federal 
University of Lavras* - lucas@lcfcompany.com.br

## License
This project is licensed under no license. Copyleft is freedom!

