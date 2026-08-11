/* Ghidra address: 019768f0 */
/* Ghidra symbol: FUN_019768f0 */


void FUN_019768f0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x218) = 0;
  plVar1 = *(longlong **)(param_1 + 0x210);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = FUN_018b0c80(&PTR_FUN_018a1608,1,*(undefined8 *)(param_1 + 0x178));
    *(undefined8 *)(param_1 + 0x218) = uVar3;
    plVar1 = *(longlong **)(param_1 + 0x218);
    FUN_01977650(param_1,plVar1[0x109]);
    FUN_018ad980(plVar1);
    if (*(longlong *)(param_1 + 0x3d8) != 0) {
      (**(code **)(param_1 + 0x3d8))(*(undefined8 *)(param_1 + 0x3e0),param_1);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x220) + 0xf) != '\0') {
      FUN_00800470(plVar1,0);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x220) + 0x11) == '\0') {
      if (*(char *)(*(longlong *)(param_1 + 0x220) + 0x10) == '\0') {
        uVar3 = FUN_0065b870(plVar1);
        uVar2 = FUN_00429990(uVar3,0xffffffec);
        uVar3 = FUN_0065b870(plVar1);
        FUN_00429fc0(uVar3,0xffffffec,(longlong)(int)(uVar2 | 0x40000));
      }
      *(undefined1 *)(plVar1 + 0x108) = 1;
      FUN_008059a0(plVar1);
    }
    else {
      (**(code **)(*plVar1 + 0x2d0))(plVar1);
      FUN_00410f20(plVar1);
      *(undefined8 *)(param_1 + 0x218) = 0;
    }
  }
  else {
    uVar3 = FUN_0196f540(param_1);
    (**(code **)(*plVar1 + 0x288))(plVar1,param_1,uVar3);
  }
  return;
}

