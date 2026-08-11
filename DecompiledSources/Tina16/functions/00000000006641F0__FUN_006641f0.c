/* Ghidra address: 006641f0 */
/* Ghidra symbol: FUN_006641f0 */


void FUN_006641f0(longlong *param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  
  lVar2 = FUN_00661230(param_1,param_2);
  if (lVar2 == 0) {
    if (param_3 != '\0') {
      local_24 = *(undefined4 *)(param_2 + 0x90);
      local_20 = *(undefined4 *)(param_2 + 0x94);
      lVar2 = FUN_00661cc0(param_1,&local_24,local_1c);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(lVar2 + 8);
      }
      uVar1 = FUN_00663f30(auStack_48,param_2,uVar3);
      (**(code **)(*param_1 + 0x18))(param_1,param_2,uVar1,uVar3);
    }
  }
  else {
    if (param_3 == '\0') {
      FUN_00663fc0(auStack_48,lVar2);
    }
    else {
      FUN_00664070(auStack_48,lVar2);
    }
    (**(code **)(*(longlong *)param_1[5] + 0x180))((longlong *)param_1[5]);
  }
  return;
}

