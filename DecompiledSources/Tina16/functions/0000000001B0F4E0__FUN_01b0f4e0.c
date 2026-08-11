/* Ghidra address: 01b0f4e0 */
/* Ghidra symbol: FUN_01b0f4e0 */


ulonglong FUN_01b0f4e0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  longlong *plVar4;
  char *pcVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = 0;
  iVar7 = 0;
  do {
    if (((char)uVar6 != '\0') || (*(int *)(param_2 + 0x10) <= iVar7)) {
      return uVar6;
    }
    plVar4 = (longlong *)FUN_00b94e60(param_2,iVar7);
    cVar1 = FUN_0198a580(plVar4);
    if (cVar1 == '\x04') {
      sVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (sVar2 == 4) {
        pcVar5 = (char *)FUN_01cfd6a0(plVar4);
        if (*pcVar5 != '\x03') goto LAB_01b0f538;
        uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
      }
      else {
LAB_01b0f538:
        uVar6 = 0;
      }
      cVar1 = FUN_01d04d50(plVar4);
      if ((cVar1 != '\0') && (*(longlong *)(plVar4[0x35] + 8) != 0)) {
        uVar3 = FUN_01b0f4e0(param_1,*(undefined8 *)(plVar4[0x35] + 8));
        uVar6 = (ulonglong)uVar3;
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

