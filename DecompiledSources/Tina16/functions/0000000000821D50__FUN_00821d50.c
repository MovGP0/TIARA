/* Ghidra address: 00821d50 */
/* Ghidra symbol: FUN_00821d50 */


void FUN_00821d50(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined7 uVar6;
  code *pcVar5;
  
  if (-1 < param_2) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x28))(*(longlong **)(param_1 + 0x4a0));
    if (param_2 < iVar2) {
      cVar1 = FUN_00821960(param_1,param_2);
      if (cVar1 != '\0') {
        uVar4 = FUN_008219a0(param_1,param_2);
        uVar3 = (undefined4)uVar4;
        cVar1 = (char)uVar4;
        uVar6 = (undefined7)((ulonglong)uVar4 >> 8);
        if (cVar1 == '\0') {
          if (*(char *)(param_1 + 0x550) == '\0') {
            uVar3 = (undefined4)CONCAT71(uVar6,1);
          }
          else {
            uVar3 = (undefined4)CONCAT71(uVar6,2);
          }
        }
        else if (cVar1 == '\x01') {
          uVar3 = 0;
        }
        else if (cVar1 == '\x02') {
          uVar3 = (undefined4)CONCAT71(uVar6,1);
        }
        FUN_00821830(param_1,param_2,uVar3);
        pcVar5 = (code *)FUN_00411550(param_1,0xffa6);
        (*pcVar5)(param_1);
      }
    }
  }
  return;
}

