/* Ghidra address: 010be120 */
/* Ghidra symbol: FUN_010be120 */


void FUN_010be120(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  if (0 < iVar2) {
    lVar4 = (**(code **)(*param_2 + 0x30))(param_2,param_3);
    if (lVar4 == 0) {
      FUN_00414ad0(param_4,&LAB_010be2bc);
    }
    else {
      plVar5 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2,param_3);
      uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      sVar1 = (short)uVar6;
      uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
      if ((((sVar1 == 9) || (sVar1 == 0x6b)) || (sVar1 == 200)) ||
         ((sVar1 == 0xd2 || (sVar1 == 0xdc)))) {
        uVar3 = (undefined4)CONCAT71(uVar7,2);
      }
      else if ((sVar1 == 0x24) || (sVar1 == 0x6c)) {
        uVar3 = (undefined4)CONCAT71(uVar7,1);
      }
      else if (sVar1 == 0xf) {
        uVar3 = (undefined4)CONCAT71(uVar7,5);
      }
      else if (sVar1 == 0xd) {
        uVar3 = (undefined4)CONCAT71(uVar7,6);
      }
      else if (((sVar1 == 0x10) || (sVar1 == 0xd9)) || (sVar1 == 0xda)) {
        uVar3 = (undefined4)CONCAT71(uVar7,3);
      }
      else if ((sVar1 == 0xe) || (sVar1 == 0x43)) {
        uVar3 = (undefined4)CONCAT71(uVar7,4);
      }
      else {
        uVar3 = (undefined4)CONCAT71(uVar7,7);
      }
      FUN_010bd010(&local_28,uVar3);
      local_20 = local_28;
      local_18 = 0x11;
      FUN_00442f70(&local_10,L"[%s]",&local_20,0);
      FUN_00414ad0(param_4,local_10);
    }
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}

