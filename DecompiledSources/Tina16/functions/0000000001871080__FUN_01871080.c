/* Ghidra address: 01871080 */
/* Ghidra symbol: FUN_01871080 */


void FUN_01871080(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  local_38 = param_1;
  plVar5 = (longlong *)FUN_004113f0(*(undefined8 *)(param_1 + 8),&PTR_FUN_01925478);
  if (plVar5 != (longlong *)0x0) {
    uVar3 = FUN_0195f670(plVar5,9);
    FUN_00682f00(*(undefined8 *)(local_38 + 0x70),uVar3);
    uVar3 = FUN_01871060(auStack_58,(char)plVar5[0x5e]);
    FUN_00680480(*(undefined8 *)(local_38 + 0x70),uVar3);
    (**(code **)(*plVar5 + 0x348))(plVar5,&local_20);
    iVar4 = FUN_00416420(local_20,0);
    if (iVar4 != 0) {
      iVar4 = FUN_00414cc0(local_20);
      if (*(short *)(local_20 + -2 + (longlong)iVar4 * 2) == 10) {
        iVar4 = FUN_00414cc0(local_20);
        FUN_00416490(&local_20,iVar4 + -1,2);
      }
    }
    FUN_004168b0(local_30,local_20);
    FUN_0064de00(*(undefined8 *)(local_38 + 0x70),local_30[0]);
    plVar1 = *(longlong **)(*(longlong *)(local_38 + 0x70) + 0xb8);
    (**(code **)(*plVar1 + 0x10))(plVar1,plVar5[0xf]);
    uVar2 = *(undefined8 *)(*(longlong *)(local_38 + 0x70) + 0xb8);
    iVar4 = FUN_005fcc70(uVar2);
    uVar3 = FUN_0040c770((double)iVar4 * *(double *)(local_38 + 0x48));
    FUN_005fcc80(uVar2,uVar3);
  }
  FUN_00414480(local_30);
  FUN_00414520(&local_20);
  return;
}

