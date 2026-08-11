/* Ghidra address: 014eec50 */
/* Ghidra symbol: FUN_014eec50 */


void FUN_014eec50(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x128))(*(longlong **)(param_1 + 0x7e8),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7e8),0);
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))
            (*(longlong **)(param_1 + 0x6e0),*(undefined4 *)(param_1 + 0x7f8));
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))
            (*(longlong **)(param_1 + 0x6d0),*(undefined1 *)(param_1 + 0x878));
  (**(code **)(**(longlong **)(param_1 + 0x790) + 0x268))
            (*(longlong **)(param_1 + 0x790),*(undefined1 *)(param_1 + 0x7fd));
  (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))
            (*(longlong **)(param_1 + 0x728),0 < *(int *)(param_1 + 0x848));
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x268))
            (*(longlong **)(param_1 + 0x740),0 < *(int *)(param_1 + 0x850));
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
            (*(longlong **)(param_1 + 0x758),0 < *(int *)(param_1 + 0x85c));
  (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x268))
            (*(longlong **)(param_1 + 0x7e0),*(undefined1 *)(param_1 + 0x84f));
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
            (*(longlong **)(param_1 + 0x748),*(undefined1 *)(param_1 + 0x84c));
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))
            (*(longlong **)(param_1 + 0x750),*(undefined1 *)(param_1 + 0x84e));
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))
            (*(longlong **)(param_1 + 0x700),*(undefined4 *)(param_1 + 0x81c));
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
            (*(longlong **)(param_1 + 0x718),*(undefined4 *)(param_1 + 0x820));
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))
            (*(longlong **)(param_1 + 0x720),*(undefined4 *)(param_1 + 0x824));
  (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x268))
            (*(longlong **)(param_1 + 0x7e8),
             CONCAT31((int3)(*(uint *)(param_1 + 0x860) >> 8),(*(uint *)(param_1 + 0x860) & 1) != 0)
            );
  FUN_014ef470(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))
            (*(longlong **)(param_1 + 0x738),*(uint *)(param_1 + 0x87f) & 0xf);
  (**(code **)(**(longlong **)(param_1 + 0x768) + 0x268))
            (*(longlong **)(param_1 + 0x768),
             CONCAT31((int3)(*(uint *)(param_1 + 0x87f) >> 8),
                      (*(uint *)(param_1 + 0x87f) & 0x10) == 0));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x770),*(undefined4 *)(param_1 + 0x858));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x780),*(undefined8 *)(param_1 + 0x890));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7c0),*(undefined8 *)(param_1 + 0x898));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7a0),*(undefined8 *)(param_1 + 0x838));
  FUN_0064de00(*(undefined8 *)(param_1 + 2000),*(undefined8 *)(param_1 + 0x840));
  FUN_0064dd90(*(undefined8 *)(param_1 + 2000),local_30);
  if (local_30[0] == 0) {
    cVar1 = FUN_010adf80(&DAT_014eeff4,local_20);
    if (cVar1 != '\0') {
      FUN_0064de00(*(undefined8 *)(param_1 + 2000),local_20[0]);
      FUN_00414ad0(PTR_DAT_020030c0 + 0x50,local_20[0]);
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

