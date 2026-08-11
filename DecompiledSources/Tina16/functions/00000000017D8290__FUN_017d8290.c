/* Ghidra address: 017d8290 */
/* Ghidra symbol: FUN_017d8290 */


void FUN_017d8290(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined4 local_40;
  undefined4 local_3c [3];
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar5 = 1;
    do {
      bVar2 = false;
      bVar1 = false;
      iVar6 = *(int *)(param_1 + 8) + -1;
      if (iVar5 <= iVar6) {
        iVar7 = (iVar6 - iVar5) + 1;
        iVar6 = iVar5;
        do {
          dVar8 = (double)FUN_017d8580(param_1,iVar6,iVar6);
          if (dVar8 == 0.0) {
            iVar3 = FUN_017d81b0(param_1,iVar6,local_3c,&local_40);
            if (iVar3 == 1) {
              FUN_017d8100(param_1,local_3c[0],local_40);
              bVar2 = true;
            }
            else if ((1 < iVar3) && (!bVar1)) {
              bVar1 = true;
              iVar5 = iVar6;
            }
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar6 = iVar5;
      if (bVar1) {
        for (; (!bVar2 && (iVar6 <= *(int *)(param_1 + 8) + -1)); iVar6 = iVar6 + 1) {
          dVar8 = (double)FUN_017d8580(param_1,iVar6,iVar6);
          if (dVar8 == 0.0) {
            FUN_017d81b0(param_1,iVar6,local_3c,&local_40);
            FUN_017d8100(param_1,local_3c[0],local_40);
            bVar2 = true;
          }
        }
      }
    } while (bVar1);
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    thunk_FUN_04197c92(*(undefined8 *)(param_1 + 0x1d0));
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    thunk_FUN_041540ac(param_1 + 0xd8,param_1 + 0xe8);
    uVar4 = thunk_FUN_0413c545((*(int *)(param_1 + 8) -
                               *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10)) + -1,
                               *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                               param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xd8) = uVar4;
  }
  return;
}

