/* Ghidra address: 018ac930 */
/* Ghidra symbol: FUN_018ac930 */


void FUN_018ac930(longlong param_1,uint param_2,ushort param_3,undefined8 *param_4,char param_5)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 local_30 [2];
  
  local_30[0] = *param_4;
  uVar1 = *(undefined8 *)(param_1 + 0x550);
  pcVar4 = (code *)FUN_00411550(uVar1,0xffe2);
  cVar2 = (*pcVar4)(uVar1,param_3,param_2,local_30);
  if ((cVar2 == '\0') && (param_2 != 0)) {
    uVar6 = (int)param_2 >> 0x1f;
    if ((param_3 & 4) == 0) {
      lVar5 = *(longlong *)(param_1 + 0x550);
      if (param_5 == '\0') {
        iVar3 = FUN_0040c770((double)(int)-param_2 / (double)(int)((param_2 ^ uVar6) - uVar6));
        FUN_018933f0(lVar5,*(int *)(lVar5 + 0x4b4) + iVar3 * 0x14);
      }
      else {
        iVar3 = FUN_0040c770((double)(int)-param_2 / (double)(int)((param_2 ^ uVar6) - uVar6));
        FUN_018932d0(lVar5,*(int *)(lVar5 + 0x4a0) + iVar3 * 0x14);
      }
    }
    else {
      lVar5 = FUN_0040c770((double)(int)param_2 / (double)(int)((param_2 ^ uVar6) - uVar6));
      *(double *)(param_1 + 0x558) = *(double *)(param_1 + 0x558) + (double)lVar5 / 10.0;
      if (*(double *)(param_1 + 0x558) <= 0.3 && *(double *)(param_1 + 0x558) != 0.3) {
        *(undefined8 *)(param_1 + 0x558) = 0x3fd3333333333333;
      }
      FUN_018a8d30(param_1,*(undefined8 *)(param_1 + 0x558));
    }
  }
  return;
}

