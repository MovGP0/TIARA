/* Ghidra address: 01493e40 */
/* Ghidra symbol: FUN_01493e40 */


void FUN_01493e40(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_138 [256];
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b8) + 0x4e8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_00c0dad0(*(undefined8 *)(param_1 + 0x8b8),0);
  FUN_010c2250(local_30,0);
  FUN_00414ad0(param_1 + 0xba8,local_30[0]);
  FUN_00f08d50(&local_38,10);
  FUN_00416910(local_138,local_38,0xff);
  FUN_01493bd0(param_1,local_138);
  if (*(longlong *)(param_1 + 0x930) != 0) {
    *(undefined8 *)(param_1 + 0x938) = *(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x628);
    lVar3 = *(longlong *)(param_1 + 0x930);
    *(undefined8 *)(param_1 + 0x940) = *(undefined8 *)(lVar3 + 0x630);
    *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)(lVar3 + 0x638);
    *(undefined8 *)(param_1 + 0x950) = *(undefined8 *)(lVar3 + 0x640);
    *(undefined8 *)(param_1 + 0x958) = *(undefined8 *)(lVar3 + 0x648);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x650);
    puVar6 = (undefined8 *)(param_1 + 0x960);
    for (lVar3 = 0x48; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x930));
    *(undefined8 *)(param_1 + 0x930) = 0;
    uVar2 = FUN_017e1bd0(&DAT_017df868,1,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x930) = uVar2;
    FUN_017e8080(uVar2,*(undefined8 *)(param_1 + 0x8b8),*(undefined8 *)(param_1 + 0x860));
    lVar3 = *(longlong *)(param_1 + 0x930);
    *(undefined8 *)(lVar3 + 0x628) = *(undefined8 *)(param_1 + 0x938);
    *(undefined8 *)(lVar3 + 0x630) = *(undefined8 *)(param_1 + 0x940);
    *(undefined8 *)(lVar3 + 0x638) = *(undefined8 *)(param_1 + 0x948);
    *(undefined8 *)(lVar3 + 0x640) = *(undefined8 *)(param_1 + 0x950);
    *(undefined8 *)(lVar3 + 0x648) = *(undefined8 *)(param_1 + 0x958);
    puVar5 = (undefined8 *)(param_1 + 0x960);
    puVar6 = (undefined8 *)(lVar3 + 0x650);
    for (lVar4 = 0x48; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_01694110(*(undefined8 *)(lVar3 + 0x550),1,0,0);
  }
  FUN_01493c70(param_1);
  FUN_00414560(&local_38,2);
  return;
}

