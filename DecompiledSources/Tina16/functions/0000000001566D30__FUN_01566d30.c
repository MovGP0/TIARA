/* Ghidra address: 01566d30 */
/* Ghidra symbol: FUN_01566d30 */


undefined8 FUN_01566d30(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *param_2 = 0;
  if ((*(longlong *)(param_1 + 0x938) != 0) &&
     (cVar1 = FUN_00e0f3b0(*(longlong *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_020038b0,param_2),
     cVar1 != '\0')) {
    return 1;
  }
  if (((*(longlong *)(param_1 + 0x938) != 0) && (*param_2 == 0)) &&
     (cVar1 = FUN_00e0f3b0(*(longlong *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_02003ba8,param_2),
     cVar1 != '\0')) {
    return 2;
  }
  if (((*(longlong *)(param_1 + 0x938) != 0) && (*param_2 == 0)) &&
     (cVar1 = FUN_00e0f3b0(*(longlong *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_020021c8,param_2),
     cVar1 != '\0')) {
    return 4;
  }
  if (((*(longlong *)(param_1 + 0x938) != 0) && (*param_2 == 0)) &&
     (cVar1 = FUN_00e0f3b0(*(longlong *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_02003248,param_2),
     cVar1 != '\0')) {
    return 8;
  }
  if (((*(longlong *)(param_1 + 0x938) != 0) && (*param_2 == 0)) &&
     (cVar1 = FUN_00e0f3b0(*(longlong *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_02003b58,param_2),
     cVar1 != '\0')) {
    return 0x200;
  }
  if (((*(longlong *)(param_1 + 0x938) != 0) && (*param_2 == 0)) &&
     (cVar1 = FUN_00e0f3b0(*(longlong *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_02004d88,param_2),
     cVar1 != '\0')) {
    return 0x400;
  }
  if (((*(longlong *)(param_1 + 0x938) != 0) && (*param_2 == 0)) &&
     (cVar1 = FUN_00e0f3b0(*(longlong *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_02001da8,param_2),
     cVar1 != '\0')) {
    return 0x100;
  }
  if (((*(longlong *)(param_1 + 0x938) != 0) && (*param_2 == 0)) &&
     (cVar1 = FUN_00e0f3b0(*(longlong *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_02003c10,param_2),
     cVar1 != '\0')) {
    return 0x800;
  }
  if (((*(longlong *)(param_1 + 0x938) != 0) && (*param_2 == 0)) &&
     (cVar1 = FUN_00e0f3b0(*(longlong *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_02001550,param_2),
     cVar1 != '\0')) {
    return 0x20;
  }
  if (((*(longlong *)(param_1 + 0x938) != 0) && (*param_2 == 0)) &&
     (cVar1 = FUN_00e0f3b0(*(longlong *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_02003ee0,param_2),
     cVar1 != '\0')) {
    return 0x40;
  }
  if (((*(longlong *)(param_1 + 0x938) != 0) && (*param_2 == 0)) &&
     (cVar1 = FUN_00e0f3b0(*(longlong *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_020039a0,param_2),
     cVar1 != '\0')) {
    return 0x2000;
  }
  if (((*(longlong *)(param_1 + 0x938) != 0) && (*param_2 == 0)) &&
     (cVar1 = FUN_00e0f3b0(*(longlong *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_02005740,param_2),
     cVar1 != '\0')) {
    return 0x4000;
  }
  if (((*(longlong *)(param_1 + 0x938) != 0) && (*param_2 == 0)) &&
     (cVar1 = FUN_00e0f3b0(*(longlong *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_02001638,param_2),
     cVar1 != '\0')) {
    uVar2 = 0x80;
  }
  return uVar2;
}

