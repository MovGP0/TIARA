/* Ghidra address: 00cb2f50 */
/* Ghidra symbol: FUN_00cb2f50 */


void FUN_00cb2f50(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  
  local_40 = auStack_78;
  local_48 = 0;
  cVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar3 != '\0') {
    FUN_0041ddd0(&local_48,PTR_PTR_02002360);
    uVar4 = FUN_0086dfd0(&PTR_FUN_00ca5ab0,1,local_48);
    FUN_004134c0(uVar4);
  }
  if (param_1[0x2b] == 0) {
    uVar4 = FUN_0086dfd0(&PTR_FUN_00ca6278,1,L"A Host is required");
    FUN_004134c0(uVar4);
  }
  if ((short)param_1[0x30] == 0) {
    uVar4 = FUN_0086dfd0(&PTR_FUN_00ca6138,1,L"A Port is required");
    FUN_004134c0(uVar4);
  }
  if (param_1[0x20] == 0) {
    uVar4 = (**(code **)(*param_1 + 0x140))(param_1);
    (**(code **)(*param_1 + 200))(param_1,uVar4);
    *(undefined1 *)(param_1 + 0x22) = 1;
    lVar1 = param_1[0x20];
    *(longlong *)(lVar1 + 0x78) = param_1[0xf];
    *(longlong *)(lVar1 + 0x80) = param_1[0x10];
  }
  if (param_1[0x2a] != 0) {
    (**(code **)(*(longlong *)param_1[0x20] + 0xb8))((longlong *)param_1[0x20],param_1[0x2a]);
  }
  (**(code **)(*(longlong *)param_1[0x20] + 200))((longlong *)param_1[0x20],(short)param_1[0x30]);
  (**(code **)(*(longlong *)param_1[0x20] + 0xc0))((longlong *)param_1[0x20],param_1[0x2b]);
  lVar1 = param_1[0x20];
  *(int *)(lVar1 + 0xf4) = (int)param_1[0x29];
  *(undefined4 *)(lVar1 + 0x130) = *(undefined4 *)((longlong)param_1 + 0x184);
  if (param_1[0x25] != 0) {
    FUN_00414ad0(param_1[0x25] + 0x160,param_1[0x27]);
    lVar1 = param_1[0x25];
    *(short *)(lVar1 + 0x168) = (short)param_1[0x28];
    *(undefined2 *)(lVar1 + 0x16c) = *(undefined2 *)((longlong)param_1 + 0x144);
    *(undefined2 *)(lVar1 + 0x16a) = *(undefined2 *)((longlong)param_1 + 0x142);
    *(char *)(lVar1 + 0x1ab) = (char)param_1[0x2c];
    FUN_00cb9b60(lVar1,(char)param_1[0x32]);
    FUN_00cb9d70(param_1[0x25],*(undefined1 *)((longlong)param_1 + 0x191));
    lVar1 = param_1[0x25];
    *(longlong *)(lVar1 + 0x170) = param_1[0x33];
    *(longlong *)(lVar1 + 0x178) = param_1[0x34];
    *(longlong *)(lVar1 + 0x180) = param_1[0x35];
    *(longlong *)(lVar1 + 0x188) = param_1[0x36];
    *(longlong *)(lVar1 + 400) = param_1[0x37];
    *(longlong *)(lVar1 + 0x198) = param_1[0x38];
  }
  (**(code **)(*(longlong *)param_1[0x20] + 0x138))((longlong *)param_1[0x20]);
  plVar2 = *(longlong **)(param_1[0x20] + 0x110);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x90))(plVar2,param_1);
  }
  local_58 = param_1[0x2b];
  local_50 = 0x11;
  FUN_00c8d310(param_1,2,&local_58,0);
  (**(code **)(*param_1 + 0x138))(param_1);
  FUN_00414480(&local_48);
  return;
}

