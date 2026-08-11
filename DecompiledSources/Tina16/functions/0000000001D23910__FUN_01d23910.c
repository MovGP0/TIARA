/* Ghidra address: 01d23910 */
/* Ghidra symbol: FUN_01d23910 */


void FUN_01d23910(longlong *param_1,int param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  longlong *plVar5;
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  iVar2 = (**(code **)(*param_1 + 0x28))();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar5 = local_30;
      (**(code **)(*param_1 + 0x18))(param_1,plVar5,iVar6);
      while( true ) {
        iVar7 = 0;
        if (local_30[0] != 0) {
          iVar7 = *(int *)(local_30[0] + -4);
        }
        if (iVar7 < 1) break;
        iVar7 = 1;
        while( true ) {
          if (iVar7 < param_2) {
            iVar3 = 0;
            if (local_30[0] != 0) {
              iVar3 = *(int *)(local_30[0] + -4);
            }
            bVar8 = iVar7 < iVar3;
          }
          else {
            bVar8 = false;
          }
          if (!bVar8) break;
          iVar7 = iVar7 + 1;
        }
        while( true ) {
          uVar1 = *(short *)(local_30[0] + -2 + (longlong)iVar7 * 2) - 0x28;
          if (uVar1 < 8) {
            uVar4 = (int)CONCAT71((int7)((ulonglong)plVar5 >> 8),1) << ((byte)uVar1 & 0x1f);
            plVar5 = (longlong *)(ulonglong)uVar4;
            bVar8 = (uVar4 & 0x28) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            bVar8 = false;
          }
          else {
            iVar3 = 0;
            if (local_30[0] != 0) {
              iVar3 = *(int *)(local_30[0] + -4);
            }
            bVar8 = iVar7 < iVar3;
          }
          if (!bVar8) break;
          iVar7 = iVar7 + 1;
        }
        FUN_00416dc0(&local_40,local_30[0],1,iVar7);
        (**(code **)(*(longlong *)*param_3 + 0x78))((longlong *)*param_3,local_40);
        plVar5 = (longlong *)0x0;
        FUN_00416e20(local_30,1,iVar7);
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_40,3);
  return;
}

