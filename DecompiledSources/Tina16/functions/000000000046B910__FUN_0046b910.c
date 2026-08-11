/* Ghidra address: 0046b910 */
/* Ghidra symbol: FUN_0046b910 */


undefined4 FUN_0046b910(undefined2 *param_1)

{
  undefined4 uVar1;
  longlong *local_20;
  
  uVar1 = FUN_0046eed0(*param_1,&local_20);
  if ((char)uVar1 != '\0') {
    (**(code **)(*local_20 + 0x60))(local_20,param_1,0xd);
  }
  return uVar1;
}

