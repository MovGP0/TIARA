/* Ghidra address: 00659340 */
/* Ghidra symbol: FUN_00659340 */


void FUN_00659340(longlong param_1,char param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((param_2 != *(char *)(param_1 + 0x393)) &&
     (*(char *)(param_1 + 0x393) = param_2, (*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    FUN_00649c60(param_1,param_2);
    if (param_2 == '\0') {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x338));
      *(undefined8 *)(param_1 + 0x338) = 0;
      FUN_0041b800(param_1 + 0x340);
    }
    else {
      if (*(longlong *)(param_1 + 0x338) == 0) {
        uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
        *(undefined8 *)(param_1 + 0x338) = uVar1;
      }
      pcVar2 = (code *)FUN_00411550(param_1,0xffc3);
      (*pcVar2)(param_1,local_20);
      FUN_0041b840(param_1 + 0x340,local_20[0]);
    }
  }
  FUN_0041b800(local_20);
  return;
}

