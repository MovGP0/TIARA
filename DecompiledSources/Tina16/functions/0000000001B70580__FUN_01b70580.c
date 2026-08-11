/* Ghidra address: 01b70580 */
/* Ghidra symbol: FUN_01b70580 */


char FUN_01b70580(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  char local_69;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  char local_39;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_0043f750(local_50,param_2);
  FUN_00416cd0(&local_30,3,&DAT_01b708cc,local_50[0],&DAT_01b708e0);
  FUN_0043f750(&local_58,param_2);
  FUN_00416ba0(&local_38,&DAT_01b708cc,local_58);
  local_69 = '\0';
  lVar5 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x9d8);
  cVar1 = FUN_004113d0(uVar4,&PTR_FUN_010db178);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_004113f0(uVar4,&PTR_FUN_010db178);
    (**(code **)(*plVar3 + 0xa0))(plVar3,&local_39);
    if ((local_39 == '\0') || (local_39 == '\x01')) {
      iVar2 = (**(code **)(*(longlong *)plVar3[1] + 0x28))((longlong *)plVar3[1]);
      local_64 = iVar2 + -1;
      uVar4 = (**(code **)(*(longlong *)plVar3[1] + 0x30))((longlong *)plVar3[1],local_64);
      lVar5 = FUN_004113f0(uVar4,&PTR_FUN_011057c0);
      *(longlong *)(lVar5 + 0x18) = plVar3[0xf];
      (**(code **)(*(longlong *)plVar3[0xf] + 0x208))((longlong *)plVar3[0xf],0,param_2,0);
      (**(code **)(*(longlong *)plVar3[0xf] + 0x208))((longlong *)plVar3[0xf],1,0,0);
      FUN_0043f750(&local_60,param_2);
      FUN_00416ba0(lVar5 + 0x110,&DAT_01b708cc,local_60);
      FUN_00414ad0(lVar5 + 0x118,&LAB_01b708f0);
      FUN_00414ad0(lVar5 + 8,*(undefined8 *)(lVar5 + 0x110));
      local_69 = '\x01';
    }
    if ((local_69 != '\0') && (lVar5 != 0)) {
      (**(code **)(*(longlong *)plVar3[1] + 0x40))
                ((longlong *)plVar3[1],local_64,*(undefined8 *)(lVar5 + 0x110));
      (**(code **)(*(longlong *)plVar3[1] + 0x48))((longlong *)plVar3[1],local_64,lVar5);
      iVar2 = FUN_00416db0(*(undefined8 *)(lVar5 + 0x118),&LAB_01b708f0);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*(longlong *)plVar3[0xc] + 0xc0))((longlong *)plVar3[0xc],lVar5);
        if (iVar2 != -1) {
          (**(code **)(*(longlong *)plVar3[0xc] + 0x98))((longlong *)plVar3[0xc],iVar2);
        }
        iVar2 = (**(code **)(*(longlong *)plVar3[0xc] + 0xb0))
                          ((longlong *)plVar3[0xc],&LAB_01b708f0);
        if (iVar2 == -1) {
          (**(code **)(*(longlong *)plVar3[0xc] + 0x80))((longlong *)plVar3[0xc],&LAB_01b708f0,0);
        }
      }
      else {
        iVar2 = (**(code **)(*(longlong *)plVar3[0xc] + 0xc0))((longlong *)plVar3[0xc],lVar5);
        if (iVar2 == -1) {
          (**(code **)(*(longlong *)plVar3[0xc] + 0x80))
                    ((longlong *)plVar3[0xc],*(undefined8 *)(lVar5 + 0x118),lVar5);
        }
        else {
          (**(code **)(*(longlong *)plVar3[0xc] + 0x48))((longlong *)plVar3[0xc],iVar2,lVar5);
          (**(code **)(*(longlong *)plVar3[0xc] + 0x40))
                    ((longlong *)plVar3[0xc],iVar2,*(undefined8 *)(lVar5 + 0x118));
        }
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,local_64);
      FUN_01b6dfd0(param_1,0);
    }
  }
  FUN_00414560(&local_60,3);
  FUN_00414560(&local_38,2);
  return local_69;
}

