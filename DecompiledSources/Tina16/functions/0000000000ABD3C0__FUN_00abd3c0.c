/* Ghidra address: 00abd3c0 */
/* Ghidra symbol: FUN_00abd3c0 */


undefined8 FUN_00abd3c0(longlong param_1,int param_2,undefined2 *param_3,longlong *param_4)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (((*(int *)(param_1 + 0x6c) != 0) && (*(int *)(param_1 + 0x68) <= param_2)) &&
     (param_2 < *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x6c))) {
    uVar1 = *(undefined2 *)
             (*(longlong *)(param_1 + 0xd8) + (longlong)(param_2 - *(int *)(param_1 + 0x68)) * 2);
    *param_3 = uVar1;
    *param_4 = param_1;
    uVar2 = CONCAT71((uint7)(byte)((ushort)uVar1 >> 8),1);
  }
  return uVar2;
}

