/* Ghidra address: 017f4700 */
/* Ghidra symbol: FUN_017f4700 */


ulonglong FUN_017f4700(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  uVar4 = 0;
  if (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x38) + 8)) {
    iVar5 = 0;
    do {
      local_48 = local_38;
      uStack_40 = uStack_30;
      FUN_017f4350(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x38),local_68,iVar5);
      FUN_00b95740(&local_48,local_68);
      cVar1 = FUN_00b95810(&local_48,&local_38);
      if (cVar1 == '\0') {
        FUN_017f4350(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x38),local_68,iVar5);
        cVar1 = FUN_00b95810(&local_48,local_68);
        if (cVar1 != '\0') goto LAB_017f47a4;
        uVar4 = 0;
      }
      else {
LAB_017f47a4:
        uVar4 = CONCAT71((int7)((ulonglong)&stack0xffffffffffffffd8 >> 8),1);
      }
      if ((char)uVar4 != '\0') {
        iVar2 = FUN_00b95950(&local_38);
        FUN_017f4350(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x38),local_58,iVar5);
        iVar3 = FUN_00b95950(local_58);
        if (iVar3 < iVar2) {
          FUN_017f4250(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x38),iVar5);
          FUN_017f40f0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x38),&local_38);
        }
      }
      iVar5 = iVar5 + 1;
    } while (((char)uVar4 == '\0') &&
            (iVar5 != *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x38) + 8)));
  }
  return uVar4 & 0xffffffff;
}

