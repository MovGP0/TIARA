/* Ghidra address: 015d74e0 */
/* Ghidra symbol: FUN_015d74e0 */


void FUN_015d74e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_2d0 [2];
  undefined1 local_2bb;
  char local_2ba;
  char local_2b9;
  int local_2b8;
  int local_2b4;
  undefined8 local_2b0 [2];
  uint local_2a0;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_2d0[0] = 0;
  puVar5 = local_2b0;
  for (lVar4 = 0x50; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_4;
    param_4 = param_4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004179d0(local_2b0,&DAT_00432b90);
  local_2bb = *(char *)(param_1 + 0xa0) != '\0';
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0xb8))
            (*(longlong **)(param_1 + 0x80),param_2,local_2bb,&local_2ba);
  if ((local_2ba != '\0') &&
     (local_2b4 = FUN_015d86a0(*(undefined8 *)(param_1 + 0x80),param_2,param_3,1,0,0),
     -1 < local_2b4)) {
    if (*(char *)(param_1 + 0xa0) != '\0') {
      lVar4 = FUN_015c2a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x238) + 0x28),local_2b4)
      ;
      *(undefined1 *)(lVar4 + 0x8e) = 1;
    }
    local_2b9 = '\0';
    iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x80) + 0xd8) + 0x28))();
    local_2b8 = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0xd8);
        (**(code **)(*plVar1 + 0x18))(plVar1,local_2d0,local_2b8);
        cVar2 = FUN_015d4f30(*(undefined8 *)(param_1 + 0x80),param_2,local_2d0[0],
                             (local_2a0 & 0x10) != 0);
        if (cVar2 != '\0') {
          local_2b9 = '\x01';
          break;
        }
        local_2b8 = local_2b8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (local_2b9 != '\0') {
      lVar4 = FUN_015c2a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x238) + 0x28),local_2b4)
      ;
      *(undefined1 *)(lVar4 + 0x8d) = 0;
      if ((*(short *)(*(longlong *)(param_1 + 0x80) + 0x240) == 0) ||
         (*(short *)(*(longlong *)(param_1 + 0x80) + 0x240) == 8)) {
        lVar4 = FUN_015c2a60(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x238) + 0x28),
                             local_2b4);
        *(undefined2 *)(lVar4 + 10) = 0;
        lVar4 = FUN_015c2a60(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x238) + 0x28),
                             local_2b4);
        *(undefined2 *)(lVar4 + 0x8b) = 0;
      }
      else {
        lVar4 = FUN_015c2a60(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x238) + 0x28),
                             local_2b4);
        *(undefined2 *)(lVar4 + 10) = 0xff;
        lVar4 = FUN_015c2a60(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x238) + 0x28),
                             local_2b4);
        *(undefined2 *)(lVar4 + 0x8b) = 0xff;
      }
    }
    local_30 = local_260;
    uStack_2c = local_264;
    if ((CONCAT44(local_264,local_260) < 0xffffffff) &&
       (*(char *)(*(longlong *)(param_1 + 0x80) + 600) != '\x02')) {
      lVar4 = FUN_015c2a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x238) + 0x28),local_2b4)
      ;
      *(undefined4 *)(lVar4 + 0x18) = local_30;
    }
    else {
      lVar4 = FUN_015c2a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x238) + 0x28),local_2b4)
      ;
      *(undefined1 *)(lVar4 + 0x4f) = 1;
      lVar4 = FUN_015c2a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x238) + 0x28),local_2b4)
      ;
      *(undefined4 *)(lVar4 + 0x18) = 0xffffffff;
      lVar4 = FUN_015c2a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x238) + 0x28),local_2b4)
      ;
      *(ulonglong *)(lVar4 + 0x50) = CONCAT44(uStack_2c,local_30);
    }
  }
  FUN_00414480(local_2d0);
  FUN_00417740(local_2b0,&DAT_00432b90);
  return;
}

