/* Ghidra address: 01b05ff0 */
/* Ghidra symbol: FUN_01b05ff0 */


undefined8 FUN_01b05ff0(longlong *param_1)

{
  short sVar1;
  char *pcVar2;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((sVar1 == 0xa4) &&
     (pcVar2 = (char *)FUN_01cfde70(param_1,4,0,local_19,&local_1a,&local_1b), *pcVar2 == '\0')) {
    return 1;
  }
  return 0;
}

