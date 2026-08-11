/* Ghidra address: 01999350 */
/* Ghidra symbol: FUN_01999350 */


void FUN_01999350(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 local_140 [2];
  undefined1 local_130 [256];
  undefined8 local_30 [2];
  
  local_140[0] = 0;
  iVar7 = -1;
  bVar1 = false;
LAB_01999379:
  do {
    iVar7 = iVar7 + 1;
    if (iVar7 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
      uVar5 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar7);
      cVar2 = FUN_0198a580(uVar5);
      if (cVar2 != '\x04') goto LAB_01999379;
    }
    if (iVar7 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
      uVar5 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar7);
      cVar2 = FUN_0198a580(uVar5);
      if (cVar2 == '\x04') {
        plVar6 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar7);
        cVar2 = FUN_01d013b0(plVar6);
        if (cVar2 != '\0') {
          uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
          cVar2 = FUN_01d3d620(uVar4);
          if (cVar2 != '\0') {
            (**(code **)(*plVar6 + 0x2d0))(plVar6,0,local_30);
            FUN_01d3d880(local_140,local_30[0]);
            FUN_00416910(local_130,local_140[0],0xff);
            uVar3 = FUN_01d3d860(local_130);
            FUN_01d03190(plVar6,uVar3,1);
          }
        }
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_00414480(local_140);
      return;
    }
  } while( true );
}

