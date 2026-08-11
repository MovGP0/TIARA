/* Ghidra address: 01c71e40 */
/* Ghidra symbol: FUN_01c71e40 */


void FUN_01c71e40(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_30 [2];
  undefined1 local_1d;
  undefined4 local_1c [3];
  
  local_30[0] = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1710) + 0x18);
  FUN_015fca00(local_30,0,0);
  FUN_015f5c70(local_30[0],uVar1,0xffff,local_1c,&local_1d);
  FUN_0160f2b0(uVar1,local_1c[0]);
  FUN_00414480(local_30);
  return;
}

