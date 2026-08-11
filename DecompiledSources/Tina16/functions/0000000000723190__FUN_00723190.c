/* Ghidra address: 00723190 */
/* Ghidra symbol: FUN_00723190 */


char FUN_00723190(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  char local_21;
  
  local_30 = auStack_78;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x80,
               *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x100));
  FUN_00724350(*(undefined8 *)(param_1 + 0x10),&local_38);
  FUN_007291d0(*(undefined8 *)(param_1 + 8),local_38);
  FUN_00724270(*(undefined8 *)(param_1 + 0x10),&local_40);
  FUN_00729210(*(undefined8 *)(param_1 + 8),local_40);
  uVar2 = FUN_00724300(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0xb8) = uVar2;
  FUN_00414ad0(lVar1 + 0xf0,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xf8));
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x150) != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    *(longlong *)(lVar1 + 0x110) = param_1;
    *(code **)(lVar1 + 0x108) = FUN_00723550;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x130) != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    *(longlong *)(lVar1 + 0x120) = param_1;
    *(code **)(lVar1 + 0x118) = FUN_00723600;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x120) != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    *(longlong *)(lVar1 + 0x150) = param_1;
    *(code **)(lVar1 + 0x148) = FUN_00723690;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x140) != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    *(longlong *)(lVar1 + 0x170) = param_1;
    *(code **)(lVar1 + 0x168) = FUN_00723740;
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0xd8) & 0x800) != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    *(longlong *)(lVar1 + 0x160) = param_1;
    *(code **)(lVar1 + 0x158) = FUN_00723540;
  }
  FUN_00722ef0(param_1);
  FUN_00723100(param_1);
  *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x178) = param_1;
  local_21 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),param_2)
  ;
  local_50 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(local_50 + 0x178) = 0;
  if (local_21 != '\0') {
    FUN_007287b0(*(undefined8 *)(param_1 + 8),&local_48);
    FUN_00724380(local_50,local_48);
    plVar3 = (longlong *)FUN_007241d0(*(undefined8 *)(param_1 + 0x10));
    uVar4 = FUN_00728d30(*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar3 + 0x10))(plVar3,uVar4);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xe8) =
         *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb8);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_38);
  return local_21;
}

