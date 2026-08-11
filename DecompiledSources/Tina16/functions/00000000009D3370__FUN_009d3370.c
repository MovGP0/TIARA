/* Ghidra address: 009d3370 */
/* Ghidra symbol: FUN_009d3370 */


undefined8 FUN_009d3370(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 == (longlong *)0x0) {
    FUN_0041b800(param_1);
  }
  else {
    lVar3 = 0;
    bVar1 = (**(code **)(*param_2 + 0x168))(param_2);
    if (bVar1 < 7) {
      if (bVar1 == 6) {
        lVar3 = FUN_009d4b10(&PTR_FUN_009cfc30,1,param_2,param_3);
      }
      else if (bVar1 < 4) {
        if (bVar1 == 3) {
          lVar3 = FUN_009d4b10(&PTR_FUN_009ce468,1,param_2,param_3);
        }
        else if (bVar1 == 0) {
          lVar3 = FUN_009d4b10(&PTR_FUN_009cc9e8,1,param_2,param_3);
        }
        else if (bVar1 == 1) {
          lVar3 = FUN_009d4b10(&PTR_FUN_009ce020,1,param_2,param_3);
        }
        else if (bVar1 == 2) {
          lVar3 = FUN_009d4b10(&PTR_FUN_009cdb60,1,param_2,param_3);
        }
      }
      else if (bVar1 == 4) {
        lVar3 = FUN_009d4b10(&PTR_FUN_009cec60,1,param_2,param_3);
      }
      else if (bVar1 == 5) {
        lVar3 = FUN_009d4b10(&PTR_FUN_009cf880,1,param_2,param_3);
      }
    }
    else if (bVar1 < 10) {
      if (bVar1 == 9) {
        lVar3 = FUN_009d4b10(&PTR_FUN_009d04b8,1,param_2,param_3);
      }
      else if (bVar1 == 7) {
        lVar3 = FUN_009d4b10(&PTR_FUN_009ce858,1,param_2,param_3);
      }
      else if (bVar1 == 8) {
        uVar2 = FUN_004113f0(param_2,&PTR_FUN_0090fbe0);
        lVar3 = FUN_009da9e0(&PTR_FUN_009d0e08,1,DAT_02012ac8,uVar2,0);
      }
    }
    else if (bVar1 == 10) {
      lVar3 = FUN_009d9690(&PTR_FUN_009cf098,1,param_2,param_3);
    }
    else if (bVar1 == 0xb) {
      lVar3 = FUN_009da3c0(&PTR_FUN_009d0008,1,param_2,param_3);
    }
    *(undefined1 *)(lVar3 + 0x40) = param_4;
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar3 + 0x58;
    }
    FUN_0041b840(param_1,lVar3);
  }
  return param_1;
}

