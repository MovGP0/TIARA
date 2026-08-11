/* Ghidra address: 00841bd0 */
/* Ghidra symbol: FUN_00841bd0 */


void FUN_00841bd0(undefined8 param_1,int param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_28;
  longlong *local_20;
  
  local_20 = (longlong *)0x0;
  local_28 = 0;
  lVar2 = FUN_00410e60(&DAT_00841af8,1);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar2 + 0x10;
  }
  FUN_0041b840(&local_28,lVar4);
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  if (param_2 == 2) {
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar2 + 0x28;
    }
    (**(code **)(*param_3 + 0x38))(param_3,lVar4);
  }
  uVar3 = FUN_0041b800(&local_20);
  cVar1 = FUN_00452340(param_3,&DAT_00841cd8,uVar3);
  if (cVar1 != '\0') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + 0x20;
    }
    (**(code **)(*local_20 + 0xb8))(local_20,lVar2);
  }
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  return;
}

