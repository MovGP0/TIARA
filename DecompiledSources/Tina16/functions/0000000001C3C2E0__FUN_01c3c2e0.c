/* Ghidra address: 01c3c2e0 */
/* Ghidra symbol: FUN_01c3c2e0 */


void FUN_01c3c2e0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 *local_28;
  undefined1 local_20 [7];
  undefined1 local_19 [9];
  
  local_30 = 0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0));
  (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x128))(*(longlong **)(param_1 + 0x7c8),uVar2);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0xf0))(*(longlong **)(param_1 + 0x7c8));
  (**(code **)(**(longlong **)(param_1 + 2000) + 0x128))(*(longlong **)(param_1 + 2000),uVar2);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8));
  (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x128))(*(longlong **)(param_1 + 0x7e0),uVar2);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0));
  if ((char)uVar3 == '\0') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8))
    ;
    if ((char)uVar3 == '\0') {
      uVar2 = 0;
      goto LAB_01c3c3cb;
    }
  }
  uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
LAB_01c3c3cb:
  (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x128))(*(longlong **)(param_1 + 0x8c0),uVar2);
  cVar1 = FUN_01c3c010(param_1);
  if (cVar1 == '\x01') {
    FUN_01c3c2a0(param_1,0,0);
  }
  else {
    cVar1 = FUN_01c3c010(param_1);
    if (cVar1 == '\x03') {
      FUN_01c3c530(param_1,&local_30);
      uVar2 = FUN_01c3ff70(param_1,local_30,local_19,local_20);
      FUN_01c3c2a0(param_1,0,uVar2);
    }
    else {
      cVar1 = FUN_01c3c010(param_1);
      if (cVar1 == '\x02') {
        FUN_01c3c2a0(param_1,1,0);
      }
      else {
        FUN_01c3c2a0(param_1,0,0);
      }
    }
  }
  local_28 = (undefined8 *)(param_1 + 0x920);
  uVar3 = *local_28;
  *local_28 = 0;
  FUN_00410f20(uVar3);
  FUN_01c38530(param_1,*(undefined8 *)(param_1 + 0x6c8));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x720),0);
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))
            (*(longlong **)(param_1 + 0x730),0xffffffff);
  (**(code **)(**(longlong **)(param_1 + 0x890) + 0x268))(*(longlong **)(param_1 + 0x890),0);
  FUN_01c38160(param_1);
  FUN_00414480(&local_30);
  return;
}

