/* Ghidra address: 017178f0 */
/* Ghidra symbol: FUN_017178f0 */


undefined1 FUN_017178f0(longlong param_1,byte *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 local_130 [2];
  undefined4 local_11c;
  byte local_118 [256];
  
  local_130[0] = 0;
  lVar4 = (ulonglong)*param_2 + 1;
  pbVar5 = local_118;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  FUN_004169a0(local_130,local_118);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x140))
                    (*(longlong **)(param_1 + 0x30),local_130[0],&local_11c);
  if (cVar1 != '\0') {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))
                      (*(longlong **)(param_1 + 0x30),local_11c);
    iVar3 = FUN_00415a60(*(undefined8 *)(lVar4 + 0x20),"[Internal]");
    if (iVar3 != 0) {
      uVar2 = 1;
      goto LAB_01717976;
    }
  }
  uVar2 = 0;
LAB_01717976:
  FUN_00414480(local_130);
  return uVar2;
}

