/* Ghidra address: 017be6e0 */
/* Ghidra symbol: FUN_017be6e0 */


ulonglong FUN_017be6e0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  *(undefined1 *)(param_1 + 0xa9) = 0;
  uVar2 = FUN_01cf08e0(param_1,param_2,&local_38);
  uVar3 = (ulonglong)uVar2;
  if ((char)uVar2 == '\0') {
    FUN_017be0e0(param_1,param_2,local_48,PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],
                 *PTR_DAT_020037e8,PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
    FUN_00b95740(&local_38,local_48);
    cVar1 = FUN_00b95810(local_48,&local_38);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0xa9) = 1;
      uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xa9) = 0;
  }
  return uVar3;
}

