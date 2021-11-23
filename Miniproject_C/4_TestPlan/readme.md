# Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P**                    | **Exp O/P**   | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|  ------------------------------|---------------|----------------|------------------|
|  H_01       |Check whether after correct answer score is incremented       |  add score after correct answer|score added    |score added     |Requirement based |
|  H_02       |Check whether score is incremented only after correct answer  |  a wrong answer                |score not added|score not added |Requirement based |

## Table no: Low level test plan
| **Test ID** | **Description**                                              | **Exp IN**   | **Exp OUT**               | **Actual Out**    |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------  |-------------              |----------------   |------------------|
|  L_01       |Check whether Highest score is shown correctly                |  show record |Highest score of all time  |Highest score shown|Requirement based |
|  L_02       |Check whether game starts on S key press                      |  s           |Game start                 |Game started       |Requirement based |
|  L_03       |Check whether user name is registered                         |  sukh        |sukh + Score to be stored  |sukh + Score stored|Requirement based |
