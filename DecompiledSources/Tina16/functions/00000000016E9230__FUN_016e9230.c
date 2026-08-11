/* Ghidra address: 016e9230 */
/* Ghidra symbol: FUN_016e9230 */


undefined8 FUN_016e9230(longlong param_1,longlong *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 unaff_R13;
  
  if (*param_3 < 0x7ffffffe) {
    *param_3 = *param_3 + 1;
    uVar3 = FUN_004095c0(0x140);
    *(undefined8 *)(param_1 + -8 + (longlong)*param_3 * 8) = uVar3;
    puVar1 = *(undefined4 **)(param_1 + -8 + (longlong)*param_3 * 8);
    if (puVar1 == (undefined4 *)0x0) {
      *param_3 = *param_3 + -1;
    }
    else {
      if (param_2 == (longlong *)0x0) {
        uVar2 = FUN_01d39f20(0xffffffff);
        *puVar1 = uVar2;
      }
      else {
        uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
        uVar2 = FUN_01d39f20(uVar2);
        *puVar1 = uVar2;
      }
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined1 *)((longlong)puVar1 + 5) = 0;
      *(undefined1 *)((longlong)puVar1 + 6) = 0;
      *(undefined1 *)((longlong)puVar1 + 7) = 0;
      *(undefined1 *)(puVar1 + 2) = 0;
      *(undefined2 *)((longlong)puVar1 + 10) = 0;
      *(undefined2 *)(puVar1 + 3) = 0;
      *(undefined2 *)((longlong)puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined2 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 0x1a) = 0;
      *(undefined1 *)(puVar1 + 0x44) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x111) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x112) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x113) = 0;
      *(undefined1 *)(puVar1 + 0x45) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x115) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x116) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x117) = 0;
      *(undefined1 *)(puVar1 + 0x46) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x119) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x11a) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x11b) = 0;
      *(undefined1 *)(puVar1 + 0x47) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x11d) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x11e) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x11f) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x121) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x122) = 0;
      *(longlong **)(puVar1 + 0x4a) = param_2;
      uVar3 = FUN_01b124e0(&PTR_FUN_01afcf68,1,1);
      *(undefined8 *)(puVar1 + 0x4c) = uVar3;
      puVar1[0x4f] = *param_3;
      *(undefined1 *)(puVar1 + 0x4e) = 0;
      unaff_R13 = *(undefined8 *)(param_1 + -8 + (longlong)*param_3 * 8);
    }
  }
  else {
    FUN_01b04d70(0x100,&LAB_016e9414,0);
  }
  return unaff_R13;
}

