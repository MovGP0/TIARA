/* Ghidra address: 0136a240 */
/* Ghidra symbol: FUN_0136a240 */


undefined8 FUN_0136a240(longlong param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  uVar2 = FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8));
  FUN_01a982d0(uVar2,param_3,param_4,local_2c,&local_30);
  FUN_01369fe0(param_1);
  *(undefined4 *)(param_1 + 0x24) = local_2c[0];
  *(undefined4 *)(param_1 + 0x28) = local_30;
  if ((((*(char *)(param_1 + 0x18) != '\x02') && ((param_2 & 8) != 0)) &&
      (uVar1 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x1c), uVar3 = (int)uVar1 >> 0x1f,
      8 < (int)((uVar1 ^ uVar3) - uVar3))) &&
     (uVar1 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20), uVar3 = (int)uVar1 >> 0x1f,
     8 < (int)((uVar1 ^ uVar3) - uVar3))) {
    *(undefined1 *)(param_1 + 0x18) = 2;
  }
  FUN_01369fe0(param_1);
  return 0;
}

