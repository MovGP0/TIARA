/* Ghidra address: 01638040 */
/* Ghidra symbol: FUN_01638040 */


void FUN_01638040(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong local_30;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                        (*(longlong **)(param_1 + 0x68),iVar7);
      lVar5 = *(longlong *)(lVar4 + 0x20);
      if ((*(char *)(lVar5 + 0x49) != '\0') && (*(char *)(lVar5 + 0x4a) != '\0')) {
        lVar5 = FUN_004aeac0(*(undefined8 *)(lVar5 + 8),0);
        lVar5 = FUN_016373b0(param_1,*(undefined8 *)(lVar5 + 0x58),0x35,1);
        if (lVar5 == 0) {
          FUN_01613110(L"THDLProcess.ProcessLaplaceComps");
        }
        uVar3 = FUN_01614590(lVar5);
        uVar6 = FUN_01637b30(param_1,lVar5,uVar3,param_2,lVar4);
        plVar1 = *(longlong **)(lVar4 + 0x48);
        (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_30);
        *(undefined8 *)(local_30 + 0x48) = uVar6;
        *(undefined8 *)(plVar1[0xa7] + 0x58) = uVar6;
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

