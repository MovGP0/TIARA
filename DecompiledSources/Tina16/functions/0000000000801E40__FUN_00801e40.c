/* Ghidra address: 00801e40 */
/* Ghidra symbol: FUN_00801e40 */


void FUN_00801e40(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x4c0) == param_2) goto code_r0x00801f4e;
  if ((param_2 == 0) || ((*(ushort *)(param_1 + 0x34) & 0x10) != 0)) goto LAB_00801f02;
  if (param_2 == param_1) {
LAB_00801ed8:
    FUN_0041ddd0(local_20,PTR_PTR_02004f50);
    uVar4 = FUN_0044d490(&PTR_FUN_00472870,1,local_20[0]);
    FUN_004134c0(uVar4);
  }
  else {
    lVar2 = FUN_007f9b10(param_2,1);
    if (lVar2 != param_1) goto LAB_00801ed8;
    if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
      pcVar3 = (code *)FUN_00411550(param_2,0xffb3);
      cVar1 = (*pcVar3)(param_2);
      if (cVar1 == '\0') goto LAB_00801ed8;
    }
  }
LAB_00801f02:
  *(longlong *)(param_1 + 0x4c0) = param_2;
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    if (*(char *)(param_1 + 0x4d5) != '\0') {
      FUN_00802550(param_1);
    }
    pcVar3 = (code *)FUN_00411550(param_1,0xffab);
    (*pcVar3)(param_1);
  }
code_r0x00801f4e:
  FUN_00414480(local_20);
  return;
}

