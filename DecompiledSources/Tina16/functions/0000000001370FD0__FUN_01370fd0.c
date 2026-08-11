/* Ghidra address: 01370fd0 */
/* Ghidra symbol: FUN_01370fd0 */


void FUN_01370fd0(longlong param_1)

{
  short sVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_38 = 0;
  plVar3 = *(longlong **)(param_1 + 0x758);
  uVar2 = (**(code **)(*plVar3 + 0x260))(plVar3);
  plVar3 = (longlong *)
           (**(code **)(*(longlong *)plVar3[0x9e] + 0x30))((longlong *)plVar3[0x9e],uVar2);
  uVar4 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  sVar1 = (short)uVar4;
  uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
  if ((((sVar1 == 9) || (sVar1 == 0x6b)) || (sVar1 == 200)) || ((sVar1 == 0xd2 || (sVar1 == 0xdc))))
  {
    uVar2 = (undefined4)CONCAT71(uVar5,2);
  }
  else if ((sVar1 == 0x24) || (sVar1 == 0x6c)) {
    uVar2 = (undefined4)CONCAT71(uVar5,1);
  }
  else if (sVar1 == 0xf) {
    uVar2 = (undefined4)CONCAT71(uVar5,5);
  }
  else if (sVar1 == 0xd) {
    uVar2 = (undefined4)CONCAT71(uVar5,6);
  }
  else if (((sVar1 == 0x10) || (sVar1 == 0xd9)) || (sVar1 == 0xda)) {
    uVar2 = (undefined4)CONCAT71(uVar5,3);
  }
  else if ((sVar1 == 0xe) || (sVar1 == 0x43)) {
    uVar2 = (undefined4)CONCAT71(uVar5,4);
  }
  else {
    uVar2 = (undefined4)CONCAT71(uVar5,7);
  }
  FUN_010bd010(&local_38,uVar2);
  local_30 = local_38;
  local_28 = 0x11;
  FUN_00442f70(local_20,L"[%s]",&local_30,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_20[0]);
  FUN_010bd010(&local_48,uVar2);
  local_30 = local_48;
  local_28 = 0x11;
  FUN_00442f70(&local_40,L"[%s]",&local_30,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_40);
  FUN_00414560(&local_48,3);
  FUN_00414480(local_20);
  return;
}

