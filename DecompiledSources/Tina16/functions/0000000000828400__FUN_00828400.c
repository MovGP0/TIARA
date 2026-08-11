/* Ghidra address: 00828400 */
/* Ghidra symbol: FUN_00828400 */


void FUN_00828400(longlong param_1,undefined8 param_2,int *param_3,char param_4,char param_5)

{
  int iVar1;
  longlong *plVar2;
  HDC hdcTarget;
  undefined8 uVar3;
  undefined8 uVar4;
  HDC local_50;
  undefined1 local_41;
  RECT local_40;
  undefined1 local_30 [12];
  undefined4 local_24;
  HPAINTBUFFER local_20;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8));
    if (iVar1 != 0) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
      if (iVar1 != 0) {
        local_24 = FUN_00827a10(param_1,param_4);
        if (*(char *)(param_1 + 0x3c) == '\0') {
          if ((param_5 == '\0') && (param_4 != '\x03')) {
            uVar3 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x10));
            uVar4 = FUN_005ffa40(param_2);
            FUN_005fbf20(0xff00000f);
            thunk_FUN_0413e9f5(uVar3,local_24,uVar4,*param_3);
          }
          else {
            uVar3 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x10));
            uVar4 = FUN_005ffa40(param_2);
            thunk_FUN_0413e9f5(uVar3,local_24,uVar4,*param_3);
          }
        }
        else {
          local_40.left = *param_3;
          local_40.top = param_3[1];
          iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8));
          local_40.right = local_40.left + iVar1 / (int)(uint)*(byte *)(param_1 + 0x2c);
          local_40.bottom =
               (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
                         (*(longlong **)(param_1 + 8),
                          (longlong)iVar1 % (longlong)(int)(uint)*(byte *)(param_1 + 0x2c) &
                          0xffffffff);
          local_40.bottom = local_40.top + local_40.bottom;
          if (param_4 == '\x01') {
            local_41 = 5;
          }
          else if ((byte)(param_4 - 2U) < 2) {
            local_41 = 4;
          }
          else {
            local_41 = 2;
          }
          plVar2 = (longlong *)FUN_00781840();
          (**(code **)(*plVar2 + 200))(plVar2,local_30,local_41);
          if (*(char *)(param_1 + 0x2d) == '\0') {
            uVar3 = FUN_00781840();
            uVar4 = FUN_005ffa40(param_2);
            FUN_007d56e0(*(undefined8 *)(param_1 + 0x10));
            FUN_00778e10(uVar3,uVar4,local_30,&local_40);
          }
          else {
            hdcTarget = (HDC)FUN_005ffa40(param_2);
            local_20 = BeginBufferedPaint(hdcTarget,&local_40,BPBF_TOPDOWNDIB,(BP_PAINTPARAMS *)0x0,
                                          &local_50);
            uVar3 = FUN_00781840();
            FUN_007d56e0(*(undefined8 *)(param_1 + 0x10));
            FUN_00778e10(uVar3,local_50,local_30,&local_40);
            BufferedPaintSetAlpha(local_20,&local_40,0xff);
            EndBufferedPaint(local_20,-1);
          }
        }
      }
    }
  }
  return;
}

