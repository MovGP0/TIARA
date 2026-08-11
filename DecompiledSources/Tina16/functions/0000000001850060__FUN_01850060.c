/* Ghidra address: 01850060 */
/* Ghidra symbol: FUN_01850060 */


void FUN_01850060(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),&local_48);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),&local_60);
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 == (longlong *)0x0) {
    FUN_00468530(&local_78,1,1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_78);
  }
  FUN_00468530(&local_90,0,1);
  cVar3 = FUN_0046f360(&local_78,&local_90);
  FUN_0184f250(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x138) == '\0') {
    FUN_00461840(&local_30,&local_48);
    if (cVar3 == '\0') {
      while (cVar3 = FUN_0046f380(&local_30,&local_60), cVar3 != '\0') {
        FUN_00461840(*(longlong *)(param_1 + 0x40) + 0x60,&local_30);
        FUN_0184f110(param_1);
        lVar2 = *(longlong *)(param_1 + 0x10);
        if ((*(char *)(lVar2 + 0x80) != '\0') || (*(char *)(lVar2 + 0x82) != '\0')) break;
        *(undefined1 *)(lVar2 + 0x81) = 0;
        FUN_00461840(&local_c0,&local_30);
        FUN_0046f1c0(&local_c0,&local_78);
        FUN_00461840(&local_30,&local_c0);
      }
    }
    else {
      while (cVar3 = FUN_0046f3d0(&local_30,&local_60), cVar3 != '\0') {
        FUN_00461840(*(longlong *)(param_1 + 0x40) + 0x60,&local_30);
        FUN_0184f110(param_1);
        lVar2 = *(longlong *)(param_1 + 0x10);
        if ((*(char *)(lVar2 + 0x80) != '\0') || (*(char *)(lVar2 + 0x82) != '\0')) break;
        *(undefined1 *)(lVar2 + 0x81) = 0;
        FUN_00461840(&local_a8,&local_30);
        FUN_0046f1c0(&local_a8,&local_78);
        FUN_00461840(&local_30,&local_a8);
      }
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x80) = 0;
  }
  FUN_00417840(&local_c0,&DAT_004013d8,7);
  return;
}

