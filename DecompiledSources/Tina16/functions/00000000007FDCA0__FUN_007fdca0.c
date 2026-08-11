/* Ghidra address: 007fdca0 */
/* Ghidra symbol: FUN_007fdca0 */


void FUN_007fdca0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  code *local_38;
  undefined8 local_30;
  
  local_38 = (code *)*param_2;
  local_30 = param_2[1];
  FUN_0065c2a0(param_1,&local_38,param_3);
  if (param_3 == param_1) {
    iVar4 = FUN_004d3e30();
    iVar5 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar1 = FUN_004d3de0(param_1,iVar5);
        pcVar2 = (code *)FUN_00411550(uVar1,0xfff0);
        cVar3 = (*pcVar2)(uVar1);
        if (cVar3 == '\0') {
          (*local_38)(local_30,uVar1);
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

