/* Ghidra address: 017be600 */
/* Ghidra symbol: FUN_017be600 */


undefined8
FUN_017be600(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
            undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  FUN_017be0e0(param_1,param_2,local_48,param_4,param_5,param_6,param_7,param_8);
  FUN_00b95740(local_48,&local_38);
  cVar1 = FUN_00b958f0(local_48);
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_01cf0890(param_1,param_2,&local_38,param_4,param_5,param_6,param_7,param_8);
  }
  return uVar2;
}

