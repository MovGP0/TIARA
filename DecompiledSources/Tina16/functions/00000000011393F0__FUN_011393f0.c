/* Ghidra address: 011393f0 */
/* Ghidra symbol: FUN_011393f0 */


void FUN_011393f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [144];
  
  local_b0 = 0;
  local_a8 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0xa10) + 0x148) == '\0') {
    cVar1 = FUN_00f83630(param_2,param_1 + 0x7ee);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 8))(*(longlong **)(param_1 + 0xa18));
      if (cVar1 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x10))(*(longlong **)(param_1 + 0xa18),1);
        if (*(char *)(*(longlong *)(param_1 + 0x990) + 0x328) == '\0') {
          *(undefined1 *)(*(longlong *)(param_1 + 0xa10) + 0x148) = 1;
          (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x78))(*(longlong **)(param_1 + 0xa18));
        }
        else {
          *(undefined1 *)(param_1 + 0xa09) = 1;
          *(undefined1 *)(param_1 + 0xa08) = 0;
          if (*(char *)(param_1 + 0xa20) == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x900) + 0x128))
                      (*(longlong **)(param_1 + 0x900),0);
            (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x128))
                      (*(longlong **)(param_1 + 0x8f8),0);
            (**(code **)(**(longlong **)(param_1 + 0x908) + 0x128))
                      (*(longlong **)(param_1 + 0x908),0);
            (**(code **)(**(longlong **)(param_1 + 0x9f8) + 0x128))
                      (*(longlong **)(param_1 + 0x9f8),0);
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 0x950) + 0x128))
                      (*(longlong **)(param_1 + 0x950),0);
          }
          *(undefined1 *)(param_1 + 0xa8b) = 1;
          *(undefined1 *)(param_1 + 0xa8c) = 0;
          *(undefined1 *)(param_1 + 0xa0a) = 1;
          *(undefined8 *)(param_1 + 0xa60) = *(undefined8 *)(param_1 + 0xa28);
          if (*(int *)(param_1 + 0xa58) < 1) {
            *(undefined4 *)(param_1 + 0xa58) = 2;
          }
          if (*(char *)(param_1 + 0xa20) == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xf0))
                      (*(longlong **)(param_1 + 0xa18),param_1 + 0xa28);
            (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xa8))
                      (*(longlong **)(param_1 + 0xa18),*(undefined8 *)(param_1 + 0xa28));
            FUN_01136e50(param_1,local_a0,*(undefined8 *)(param_1 + 0xa60),1);
            FUN_004169a0(&local_a8,local_a0);
            FUN_0064de00(*(undefined8 *)(param_1 + 0x920),local_a8);
            if (*(char *)(param_1 + 0xa0c) == '\x02') {
              FUN_0113a9b0(param_1);
            }
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xe0))
                      (*(longlong **)(param_1 + 0xa18),param_1 + 0xa28);
            (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x98))
                      (*(longlong **)(param_1 + 0xa18),*(undefined8 *)(param_1 + 0xa28));
            FUN_01136e50(param_1,local_a0,*(undefined8 *)(param_1 + 0xa60),9);
            FUN_004169a0(&local_b0,local_a0);
            FUN_0064de00(*(undefined8 *)(param_1 + 0x928),local_b0);
            if (*(char *)(param_1 + 0xa0c) == '\0') {
              FUN_0113a9b0(param_1);
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x78))(*(longlong **)(param_1 + 0xa18));
          *(undefined4 *)(param_1 + 0xa68) = 1;
          *(undefined1 *)(param_1 + 0xa0b) = 1;
          *(undefined1 *)(*(longlong *)(param_1 + 0xa10) + 0x148) = 1;
          (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x10))(*(longlong **)(param_1 + 0xa18),0);
          uVar3 = FUN_0065b870(param_1);
          uVar2 = FUN_0040c770((*(double *)(param_1 + 0xa50) * 1000.0) /
                               (double)*(int *)(param_1 + 0xa58));
          uVar2 = FUN_00b905e0(uVar2,1);
          FUN_00f832e0(uVar3,0x52c,0,0x7e0,uVar2);
        }
        (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x10))(*(longlong **)(param_1 + 0xa18),0);
      }
      else {
        uVar3 = FUN_0065b870(param_1);
        FUN_00f83670(uVar3,param_2);
      }
    }
  }
  FUN_00414560(&local_b0,2);
  return;
}

