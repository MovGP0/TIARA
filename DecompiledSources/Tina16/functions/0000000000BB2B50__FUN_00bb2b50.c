/* Ghidra address: 00bb2b50 */
/* Ghidra symbol: FUN_00bb2b50 */


void FUN_00bb2b50(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  short sVar5;
  undefined8 local_50 [2];
  short local_3a [5];
  
  local_50[0] = 0;
  iVar4 = 0;
  bVar1 = true;
  bVar2 = false;
  sVar5 = 0;
LAB_00bb2c43:
  while( true ) {
    cVar3 = (**(code **)(*param_3 + 0x60))(param_3,local_3a);
    if (cVar3 == '\0') break;
    if (!bVar2) {
      if (bVar1) goto code_r0x00bb2b9c;
      goto LAB_00bb2bb1;
    }
    if (bVar2) {
      (**(code **)(*param_3 + 0x70))(param_3,local_3a[0]);
      if (local_3a[0] == sVar5) {
        bVar2 = false;
      }
    }
  }
LAB_00bb2c5e:
  FUN_00414480(local_50);
  return;
code_r0x00bb2b9c:
  cVar3 = FUN_00bac6b0(local_3a[0]);
  if (cVar3 == '\0') {
    bVar1 = false;
LAB_00bb2bb1:
    if ((local_3a[0] == 0x3e) && (iVar4 < 1)) {
      (**(code **)(*param_3 + 0x78))(param_3,local_50);
      (**(code **)(*param_1 + 0x18))(param_1,local_50[0]);
      goto LAB_00bb2c5e;
    }
    (**(code **)(*param_3 + 0x70))(param_3,local_3a[0]);
    if (local_3a[0] == 0x5b) {
      iVar4 = iVar4 + 1;
    }
    else if (local_3a[0] == 0x5d) {
      iVar4 = iVar4 + -1;
    }
    else if ((local_3a[0] == 0x22) || (local_3a[0] == 0x27)) {
      bVar2 = true;
      sVar5 = local_3a[0];
    }
  }
  goto LAB_00bb2c43;
}

