/* Ghidra address: 00604800 */
/* Ghidra symbol: FUN_00604800 */


void FUN_00604800(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined2 local_30;
  longlong local_20;
  
  local_48 = 0;
  FUN_00417580(local_40,&DAT_005f7210);
  lVar1 = FUN_00410e60(&DAT_006046f8,1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1 + 0x10;
  }
  FUN_0041b840(&local_48,lVar3);
  *(undefined8 *)(lVar1 + 0x18) = param_4;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined2 *)(lVar1 + 0x28) = param_2;
  local_20 = FUN_00603850(DAT_01dee050,param_2);
  local_40[0] = 2;
  local_30 = *(undefined2 *)(lVar1 + 0x28);
  pcVar2 = (code *)FUN_00411550(param_1,0xfffb);
  (*pcVar2)(param_1,local_40,&local_20);
  if (local_20 == 0) {
    FUN_005ffe20(PTR_PTR_02004180);
  }
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x30;
  }
  FUN_00603b30(param_1,local_20,lVar1);
  FUN_0041b800(&local_48);
  FUN_00417740(local_40,&DAT_005f7210);
  return;
}

