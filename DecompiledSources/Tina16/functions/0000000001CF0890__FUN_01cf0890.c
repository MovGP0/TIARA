/* Ghidra address: 01cf0890 */
/* Ghidra symbol: FUN_01cf0890 */


bool FUN_01cf0890(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  (**(code **)(*param_1 + 0x68))(param_1,param_2,local_48);
  FUN_00b95740(local_48,&local_38);
  cVar1 = FUN_00b958f0(local_48);
  return cVar1 == '\0';
}

