/* Ghidra address: 0199b590 */
/* Ghidra symbol: FUN_0199b590 */


void FUN_0199b590(longlong param_1,longlong *param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong local_40 [2];
  
  cVar2 = FUN_0198a580(param_2);
  if (((((cVar2 != '\x04') || (cVar2 = FUN_01d04d40(param_2), cVar2 == '\0')) ||
       (*(longlong *)(param_2[0x35] + 8) == 0)) ||
      (((char)param_2[0x34] != '\x01' && ((char)param_2[0x34] != '\x02')))) &&
     ((cVar2 = FUN_0198a580(param_2), cVar2 != '\x04' ||
      (cVar2 = FUN_01d01970(param_2), cVar2 == '\0')))) {
    cVar2 = FUN_0198a580(param_2);
    if (((cVar2 == '\x04') && (cVar2 = FUN_01d04d40(param_2), cVar2 != '\0')) &&
       (*(char *)(param_2[0x35] + 0x70) == '\x04')) {
      uVar6 = FUN_004113f0(param_2[0x35],&PTR_FUN_017649b8);
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x3b8),uVar6);
    }
    iVar3 = (**(code **)(*param_2 + 0x1c8))();
    iVar8 = 0;
    if (-1 < iVar3 + -1) {
      do {
        iVar4 = (**(code **)(*param_2 + 0x210))(param_2,iVar8);
        if ((-1 < iVar4) && (iVar5 = FUN_019954d0(*(undefined8 *)(param_1 + 0x60)), iVar4 <= iVar5))
        {
          puVar7 = (undefined8 *)FUN_004095c0(0x10);
          *puVar7 = param_2;
          *(int *)(puVar7 + 1) = iVar8;
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0xffffffff;
          lVar9 = (longlong)iVar4;
          if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x3c8) + lVar9 * 8) == 0)
          {
            uVar6 = FUN_00410e60(&PTR_FUN_00472dd0,1);
            *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x3c8) + lVar9 * 8) =
                 uVar6;
          }
          FUN_004ae7e0(*(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x3c8) + lVar9 * 8),puVar7);
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    cVar2 = FUN_0198a580(param_2);
    if (cVar2 == '\x04') {
      iVar3 = FUN_01cfd2d0();
      iVar8 = 0;
      if (-1 < iVar3 + -1) {
        do {
          cVar2 = FUN_01cfd030(param_2,iVar8);
          if (cVar2 == '\t') {
            (**(code **)(*param_2 + 0x2d0))(param_2,iVar8,local_40);
            sVar1 = *(short *)(local_40[0] + 0x1f);
            if (-1 < sVar1) {
              iVar4 = FUN_019954d0(*(undefined8 *)(param_1 + 0x60));
              if (sVar1 <= iVar4) {
                puVar7 = (undefined8 *)FUN_004095c0(0x10);
                *puVar7 = param_2;
                *(undefined4 *)(puVar7 + 1) = 0xffffffff;
                *(int *)((longlong)puVar7 + 0xc) = iVar8;
                lVar9 = (longlong)(int)sVar1;
                if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x3c8) + lVar9 * 8)
                    == 0) {
                  uVar6 = FUN_00410e60(&PTR_FUN_00472dd0,1);
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x3c8) + lVar9 * 8)
                       = uVar6;
                }
                FUN_004ae7e0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x3c8) + lVar9 * 8),
                             puVar7);
              }
            }
          }
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return;
}

