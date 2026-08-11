/* Ghidra address: 00d87380 */
/* Ghidra symbol: FUN_00d87380 */


void FUN_00d87380(longlong *param_1,undefined1 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  uStack_2c = *(undefined4 *)(param_4 + 2);
  local_60 = *param_5;
  uStack_58 = param_5[1];
  uStack_50 = param_5[2];
  local_48 = param_5[3];
  FUN_004179d0(&local_60,&DAT_00d623c8);
  iVar3 = FUN_00416db0(param_6,L"default");
  if (iVar3 == 0) {
    lVar4 = FUN_00d74650(param_1[9],L"Button");
  }
  else {
    lVar4 = FUN_00d74650(param_1[9],param_6);
  }
  if (lVar4 == 0) {
    FUN_00d81460(param_1,param_2,param_3,&local_3c,&local_60,param_6);
  }
  else {
    cVar2 = FUN_004113d0(lVar4,&PTR_FUN_00d60be0);
    if (cVar2 != '\0') {
      bVar1 = *(byte *)(lVar4 + 0xc0);
      if (bVar1 < 5) {
        if (bVar1 == 4) {
          local_48 = CONCAT71(local_48._1_7_,4);
        }
        else if (bVar1 == 0) {
          local_48 = (ulonglong)local_48._1_7_ << 8;
        }
        else if (bVar1 == 1) {
          local_48 = CONCAT71(local_48._1_7_,3);
        }
        else if (bVar1 == 2) {
          local_48 = CONCAT71(local_48._1_7_,6);
        }
        else if (bVar1 == 3) {
          local_48 = CONCAT71(local_48._1_7_,1);
        }
      }
      else if (bVar1 == 5) {
        local_48 = CONCAT71(local_48._1_7_,7);
      }
      else if (bVar1 == 6) {
        local_48 = CONCAT71(local_48._1_7_,2);
      }
      else if (bVar1 == 7) {
        local_48 = CONCAT71(local_48._1_7_,5);
      }
      else if (bVar1 == 8) {
        local_48 = CONCAT71(local_48._1_7_,8);
      }
    }
    (**(code **)(*param_1 + 0x78))(param_1,param_3,&local_60,0);
  }
  FUN_00417740(&local_60,&DAT_00d623c8);
  return;
}

