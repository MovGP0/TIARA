/* Ghidra address: 01619d70 */
/* Ghidra symbol: FUN_01619d70 */


undefined8 FUN_01619d70(longlong param_1,undefined4 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  uVar1 = FUN_01619990(&DAT_01618688,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,param_2
                      );
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),uVar1);
  return uVar1;
}

