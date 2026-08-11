/* Ghidra address: 01749d30 */
/* Ghidra symbol: FUN_01749d30 */


void FUN_01749d30(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte unaff_DIL;
  byte bVar4;
  uint uVar5;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  byte *local_30;
  
  FUN_01d04970(param_1[5],param_3,param_4,&local_34,&local_38,1);
  (**(code **)(*param_1 + 0x10))(param_1,local_48,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  FUN_00498310(local_34,local_38);
  iVar3 = thunk_FUN_03f16006(local_48);
  if (iVar3 != 0) {
    (**(code **)(*(longlong *)param_1[5] + 0x2d0))((longlong *)param_1[5],0,&local_30);
    bVar1 = *local_30;
    if ((*PTR_DAT_02001560 == '\0') || (cVar2 = FUN_01d07320(param_1[5]), cVar2 < '\0')) {
      unaff_DIL = (byte)((ulonglong)(bVar1 + 1) % 0x100);
    }
    else {
      *(undefined1 *)(param_1 + 7) = 1;
      uVar5 = 0;
      do {
        FUN_00498350(local_48,uVar5 * -8 + 0x18,0xfffffff4,uVar5 * -8 + 0x1e,0xfffffffb);
        FUN_00498310(local_34,local_38);
        iVar3 = thunk_FUN_03f16006(local_48);
        bVar4 = (byte)uVar5;
        if (iVar3 != 0) {
          unaff_DIL = bVar1 ^ (byte)(1 << (bVar4 & 0x1f));
          *(byte *)((longlong)param_1 + 0x39) = bVar4;
          *(undefined1 *)(param_1 + 7) = 0;
        }
        uVar5 = (uint)(byte)(bVar4 + 1);
      } while ((byte)(bVar4 + 1) != 8);
      if ((char)param_1[7] != '\0') {
        unaff_DIL = (byte)((ulonglong)(bVar1 + 1) % 0x100);
      }
    }
    *local_30 = unaff_DIL;
    FUN_01749cd0(param_1);
    return;
  }
  return;
}

