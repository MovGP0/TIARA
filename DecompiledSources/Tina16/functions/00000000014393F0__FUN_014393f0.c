/* Ghidra address: 014393f0 */
/* Ghidra symbol: FUN_014393f0 */


void FUN_014393f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_014386d0(*(undefined8 *)(param_1 + 0x6b0),param_1 + 0x700);
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x6b0) + 0xe38);
  *(char *)(param_1 + 0x6d8) = cVar1;
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x1038);
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)FUN_004095c0(0x23a);
      *(undefined8 *)((longlong)puVar3 + 0x10c) = *(undefined8 *)(param_1 + 0xc3d);
      *(undefined8 *)((longlong)puVar3 + 0x114) = *(undefined8 *)(param_1 + 0xc45);
      *(undefined2 *)((longlong)puVar3 + 0x11c) = *(undefined2 *)(param_1 + 0xc4d);
      *(undefined1 *)((longlong)puVar3 + 0x11e) = *(undefined1 *)(param_1 + 0xc4f);
      if ((*(char *)(param_1 + 0xc4f) == '\x02') && (*(longlong *)(param_1 + 0xc50) == 0)) {
        *(undefined1 *)((longlong)puVar3 + 0x11e) = 0;
      }
      if (*(char *)((longlong)puVar3 + 0x11e) == '\x02') {
        *(undefined8 *)((longlong)puVar3 + 0x11f) = *(undefined8 *)(param_1 + 0xc50);
      }
      else {
        *(undefined8 *)((longlong)puVar3 + 0x11f) = 0;
      }
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
      *(undefined1 *)((longlong)puVar3 + 9) = 0;
      FUN_00416910((longlong)puVar3 + 0xc,*(undefined8 *)(param_1 + 0x6e0),0xff);
      *(undefined2 *)((longlong)puVar3 + 0x22f) = 0x2d01;
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x6f8),puVar3);
    }
    else if (cVar1 == '\x01') {
      lVar2 = *(longlong *)(param_1 + 0x6f0);
      *(undefined8 *)(lVar2 + 0x10c) = *(undefined8 *)(param_1 + 0xc3d);
      *(undefined8 *)(lVar2 + 0x114) = *(undefined8 *)(param_1 + 0xc45);
      *(undefined2 *)(lVar2 + 0x11c) = *(undefined2 *)(param_1 + 0xc4d);
      *(undefined1 *)(lVar2 + 0x11e) = *(undefined1 *)(param_1 + 0xc4f);
      if ((*(char *)(param_1 + 0xc4f) == '\x02') && (*(longlong *)(param_1 + 0xc50) == 0)) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x6f0) + 0x11e) = 0;
      }
      lVar2 = *(longlong *)(param_1 + 0x6f0);
      if (*(char *)(lVar2 + 0x11e) == '\x02') {
        *(undefined8 *)(lVar2 + 0x11f) = *(undefined8 *)(param_1 + 0xc50);
      }
      else {
        FUN_00410f20(*(undefined8 *)(lVar2 + 0x11f));
        *(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x11f) = 0;
      }
    }
    else if ((cVar1 == '\x02') && (*(longlong *)(param_1 + 0x6f0) != 0)) {
      FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x11f));
      FUN_004095f0(*(undefined8 *)(param_1 + 0x6f0));
      FUN_004ae870(*(undefined8 *)(param_1 + 0x6f8),*(undefined4 *)(param_1 + 0x6e8));
    }
  }
  return;
}

