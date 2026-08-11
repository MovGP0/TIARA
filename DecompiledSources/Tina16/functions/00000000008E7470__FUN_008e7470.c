/* Ghidra address: 008e7470 */
/* Ghidra symbol: FUN_008e7470 */


void FUN_008e7470(longlong *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  ushort uVar2;
  undefined1 local_29 [9];
  
  cVar1 = FUN_008e6d10(param_1,local_29,1);
  if (cVar1 == '\0') {
    *param_2 = 0x9c;
    *param_3 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x88))(param_1,local_29[0]);
    *param_2 = (uint)uVar2;
    *param_3 = 1;
  }
  return;
}

