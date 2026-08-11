/* Ghidra address: 01aa9090 */
/* Ghidra symbol: FUN_01aa9090 */


uint FUN_01aa9090(longlong param_1,byte param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 param_5,longlong param_6)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  char *pcVar7;
  byte bVar8;
  char cVar9;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  *(undefined1 *)(param_1 + 0x13a2a) = 0;
  if (9999 < *(ushort *)(param_1 + 0x10)) {
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,local_40,0x501);
    FUN_00414ad0(DAT_02110a68,local_40[0]);
    FUN_01aa37d0(1,&DAT_02110a68);
    FUN_01aa36f0();
    goto LAB_01aaa7f8;
  }
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
  uVar5 = FUN_01aa8e50(0,&PTR_FUN_01aa3688);
  *(undefined8 *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8) = uVar5;
  if (0x2f < param_2) {
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,&local_48,0x502);
    FUN_00414ad0(DAT_02110a68,local_48);
    FUN_01aa37d0(1,&DAT_02110a68);
    FUN_01aa36f0();
    goto LAB_01aaa7f8;
  }
  *(longlong *)(*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8) + 0x550)
       = param_6;
  *(undefined1 *)
   (*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8) + 0x560) = 0;
  *(undefined1 *)
   (*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8) + 0x565) = 0;
  pcVar1 = *(char **)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8);
  if (param_2 < 0x19) {
    if (param_2 == 0x18) {
      *pcVar1 = '\t';
      pcVar1[1] = '\0';
      pcVar1[2] = '\x01';
      *(undefined8 *)(pcVar1 + 8) = param_5;
      *(code **)(pcVar1 + 0x10) = FUN_01aa7880;
      *(code **)(pcVar1 + 0x18) = FUN_01aa7930;
      pcVar1[0x530] = '\x03';
      pcVar1[0x531] = 'S';
      pcVar1[0x532] = 'D';
      pcVar1[0x533] = 'I';
    }
    else if (param_2 < 0xd) {
      if (param_2 == 0xc) {
        pcVar1[1] = '\x01';
        pcVar1[2] = '\x01';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        iVar4 = (**(code **)(**(longlong **)(pcVar1 + 0x550) + 0x1c8))
                          (*(longlong **)(pcVar1 + 0x550));
        if (iVar4 == 3) {
          *pcVar1 = '\x02';
          *(code **)(pcVar1 + 0x10) = FUN_01aa5580;
          *(code **)(pcVar1 + 0x18) = FUN_01aa5590;
          pcVar1[0x530] = '\x04';
          pcVar1[0x531] = 'N';
          pcVar1[0x532] = 'o';
          pcVar1[0x533] = 'r';
          pcVar1[0x534] = '2';
        }
        else {
          *pcVar1 = (char)iVar4 + -1;
          *(code **)(pcVar1 + 0x10) = FUN_01aa52a0;
          *(code **)(pcVar1 + 0x18) = FUN_01aa53a0;
          pcVar1[0x530] = '\x04';
          pcVar1[0x531] = 'N';
          pcVar1[0x532] = 'o';
          pcVar1[0x533] = 'r';
          pcVar1[0x534] = 'n';
        }
      }
      else if (param_2 < 7) {
        if (param_2 == 6) {
          pcVar1[1] = '\x01';
          pcVar1[2] = '\x01';
          *(undefined8 *)(pcVar1 + 8) = param_5;
          iVar4 = (**(code **)(**(longlong **)(pcVar1 + 0x550) + 0x1c8))
                            (*(longlong **)(pcVar1 + 0x550));
          if (iVar4 == 3) {
            *pcVar1 = '\x02';
            *(code **)(pcVar1 + 0x10) = FUN_01aa4ad0;
            *(code **)(pcVar1 + 0x18) = FUN_01aa4ae0;
            pcVar1[0x530] = '\x03';
            pcVar1[0x531] = 'O';
            pcVar1[0x532] = 'r';
            pcVar1[0x533] = '2';
          }
          else {
            *pcVar1 = (char)iVar4 + -1;
            *(code **)(pcVar1 + 0x10) = FUN_01aa4810;
            *(code **)(pcVar1 + 0x18) = FUN_01aa4900;
            pcVar1[0x530] = '\x03';
            pcVar1[0x531] = 'O';
            pcVar1[0x532] = 'r';
            pcVar1[0x533] = 'n';
          }
        }
        else if (param_2 < 4) {
          if (param_2 == 3) {
            pcVar1[1] = '\x01';
            pcVar1[2] = '\x01';
            *(undefined8 *)(pcVar1 + 8) = param_5;
            iVar4 = (**(code **)(**(longlong **)(pcVar1 + 0x550) + 0x1c8))
                              (*(longlong **)(pcVar1 + 0x550));
            if (iVar4 == 3) {
              *pcVar1 = '\x02';
              *(code **)(pcVar1 + 0x10) = FUN_01aa47b0;
              *(code **)(pcVar1 + 0x18) = FUN_01aa47c0;
              pcVar1[0x530] = '\x04';
              pcVar1[0x531] = 'A';
              pcVar1[0x532] = 'n';
              pcVar1[0x533] = 'd';
              pcVar1[0x534] = '2';
            }
            else {
              *pcVar1 = (char)iVar4 + -1;
              *(code **)(pcVar1 + 0x10) = FUN_01aa44f0;
              *(code **)(pcVar1 + 0x18) = FUN_01aa45e0;
              pcVar1[0x530] = '\x04';
              pcVar1[0x531] = 'A';
              pcVar1[0x532] = 'n';
              pcVar1[0x533] = 'd';
              pcVar1[0x534] = 'n';
            }
          }
          else if (param_2 == 0) {
            *pcVar1 = '\x01';
            pcVar1[1] = '\x01';
            pcVar1[2] = '\x01';
            *(undefined8 *)(pcVar1 + 8) = param_5;
            *(code **)(pcVar1 + 0x10) = FUN_01aa3f10;
            *(code **)(pcVar1 + 0x18) = FUN_01aa3fd0;
            pcVar1[0x530] = '\b';
            pcVar1[0x531] = 'R';
            pcVar1[0x532] = 'e';
            pcVar1[0x533] = 'p';
            pcVar1[0x534] = 'e';
            pcVar1[0x535] = 'a';
            pcVar1[0x536] = 't';
            pcVar1[0x537] = 'e';
            pcVar1[0x538] = 'r';
          }
          else if (param_2 == 1) {
            *pcVar1 = '\x01';
            pcVar1[1] = '\x01';
            pcVar1[2] = '\x01';
            *(undefined8 *)(pcVar1 + 8) = param_5;
            *(code **)(pcVar1 + 0x10) = FUN_01aa40e0;
            *(code **)(pcVar1 + 0x18) = FUN_01aa41a0;
            pcVar1[0x530] = '\x03';
            pcVar1[0x531] = 'N';
            pcVar1[0x532] = 'o';
            pcVar1[0x533] = 't';
          }
          else {
            if (param_2 != 2) goto LAB_01aaa6a7;
            *pcVar1 = '\x02';
            pcVar1[1] = '\x01';
            pcVar1[2] = '\x01';
            *(undefined8 *)(pcVar1 + 8) = param_5;
            *(code **)(pcVar1 + 0x10) = FUN_01aa42d0;
            *(code **)(pcVar1 + 0x18) = FUN_01aa4390;
            pcVar1[0x530] = '\x06';
            pcVar1[0x531] = 'T';
            pcVar1[0x532] = 'S';
            pcVar1[0x533] = 'B';
            pcVar1[0x534] = 'u';
            pcVar1[0x535] = 'f';
            pcVar1[0x536] = 'f';
          }
        }
        else if (param_2 == 4) {
          *pcVar1 = '\x03';
          pcVar1[1] = '\x01';
          pcVar1[2] = '\x01';
          *(undefined8 *)(pcVar1 + 8) = param_5;
          *(code **)(pcVar1 + 0x10) = FUN_01aa47d0;
          *(code **)(pcVar1 + 0x18) = FUN_01aa47e0;
          pcVar1[0x530] = '\x04';
          pcVar1[0x531] = 'A';
          pcVar1[0x532] = 'n';
          pcVar1[0x533] = 'd';
          pcVar1[0x534] = '3';
        }
        else {
          if (param_2 != 5) goto LAB_01aaa6a7;
          *pcVar1 = '\x04';
          pcVar1[1] = '\x01';
          pcVar1[2] = '\x01';
          *(undefined8 *)(pcVar1 + 8) = param_5;
          *(code **)(pcVar1 + 0x10) = FUN_01aa47f0;
          *(code **)(pcVar1 + 0x18) = FUN_01aa4800;
          pcVar1[0x530] = '\x04';
          pcVar1[0x531] = 'A';
          pcVar1[0x532] = 'n';
          pcVar1[0x533] = 'd';
          pcVar1[0x534] = '4';
        }
      }
      else if (param_2 < 10) {
        if (param_2 == 9) {
          pcVar1[1] = '\x01';
          pcVar1[2] = '\x01';
          *(undefined8 *)(pcVar1 + 8) = param_5;
          iVar4 = (**(code **)(**(longlong **)(pcVar1 + 0x550) + 0x1c8))
                            (*(longlong **)(pcVar1 + 0x550));
          if (iVar4 == 3) {
            *pcVar1 = '\x02';
            *(code **)(pcVar1 + 0x10) = FUN_01aa5240;
            *(code **)(pcVar1 + 0x18) = FUN_01aa5250;
            pcVar1[0x530] = '\x05';
            pcVar1[0x531] = 'N';
            pcVar1[0x532] = 'a';
            pcVar1[0x533] = 'n';
            pcVar1[0x534] = 'd';
            pcVar1[0x535] = '2';
          }
          else {
            *pcVar1 = (char)iVar4 + -1;
            *(code **)(pcVar1 + 0x10) = FUN_01aa4f60;
            *(code **)(pcVar1 + 0x18) = FUN_01aa5060;
            pcVar1[0x530] = '\x05';
            pcVar1[0x531] = 'N';
            pcVar1[0x532] = 'a';
            pcVar1[0x533] = 'n';
            pcVar1[0x534] = 'd';
            pcVar1[0x535] = 'n';
          }
        }
        else if (param_2 == 7) {
          *pcVar1 = '\x03';
          pcVar1[1] = '\x01';
          pcVar1[2] = '\x01';
          *(undefined8 *)(pcVar1 + 8) = param_5;
          *(code **)(pcVar1 + 0x10) = FUN_01aa4af0;
          *(code **)(pcVar1 + 0x18) = FUN_01aa4b00;
          pcVar1[0x530] = '\x03';
          pcVar1[0x531] = 'O';
          pcVar1[0x532] = 'r';
          pcVar1[0x533] = '3';
        }
        else {
          if (param_2 != 8) goto LAB_01aaa6a7;
          *pcVar1 = '\x04';
          pcVar1[1] = '\x01';
          pcVar1[2] = '\x01';
          *(undefined8 *)(pcVar1 + 8) = param_5;
          *(code **)(pcVar1 + 0x10) = FUN_01aa4b10;
          *(code **)(pcVar1 + 0x18) = FUN_01aa4b20;
          pcVar1[0x530] = '\x03';
          pcVar1[0x531] = 'O';
          pcVar1[0x532] = 'r';
          pcVar1[0x533] = '4';
        }
      }
      else if (param_2 == 10) {
        *pcVar1 = '\x03';
        pcVar1[1] = '\x01';
        pcVar1[2] = '\x01';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_01aa5260;
        *(code **)(pcVar1 + 0x18) = FUN_01aa5270;
        pcVar1[0x530] = '\x05';
        pcVar1[0x531] = 'N';
        pcVar1[0x532] = 'a';
        pcVar1[0x533] = 'n';
        pcVar1[0x534] = 'd';
        pcVar1[0x535] = '3';
      }
      else {
        if (param_2 != 0xb) goto LAB_01aaa6a7;
        *pcVar1 = '\x04';
        pcVar1[1] = '\x01';
        pcVar1[2] = '\x01';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_01aa5280;
        *(code **)(pcVar1 + 0x18) = FUN_01aa5290;
        pcVar1[0x530] = '\x05';
        pcVar1[0x531] = 'N';
        pcVar1[0x532] = 'a';
        pcVar1[0x533] = 'n';
        pcVar1[0x534] = 'd';
        pcVar1[0x535] = '4';
      }
    }
    else if (param_2 < 0x13) {
      if (param_2 == 0x12) {
        *pcVar1 = '\x04';
        pcVar1[1] = '\x01';
        pcVar1[2] = '\0';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_01aa5840;
        *(code **)(pcVar1 + 0x18) = FUN_01aa5910;
        pcVar1[0x530] = '\a';
        pcVar1[0x531] = 'D';
        pcVar1[0x532] = 'L';
        pcVar1[0x533] = 'a';
        pcVar1[0x534] = 't';
        pcVar1[0x535] = 'c';
        pcVar1[0x536] = 'h';
        pcVar1[0x537] = '2';
      }
      else if (param_2 < 0x10) {
        if (param_2 == 0xf) {
          *pcVar1 = '\x02';
          pcVar1[1] = '\x01';
          pcVar1[2] = '\x01';
          *(undefined8 *)(pcVar1 + 8) = param_5;
          *(code **)(pcVar1 + 0x10) = FUN_01aa4b30;
          *(code **)(pcVar1 + 0x18) = FUN_01aa4c00;
          pcVar1[0x530] = '\x03';
          pcVar1[0x531] = 'X';
          pcVar1[0x532] = 'o';
          pcVar1[0x533] = 'r';
        }
        else if (param_2 == 0xd) {
          *pcVar1 = '\x03';
          pcVar1[1] = '\x01';
          pcVar1[2] = '\x01';
          *(undefined8 *)(pcVar1 + 8) = param_5;
          *(code **)(pcVar1 + 0x10) = FUN_01aa55b0;
          *(code **)(pcVar1 + 0x18) = FUN_01aa55c0;
          pcVar1[0x530] = '\x04';
          pcVar1[0x531] = 'N';
          pcVar1[0x532] = 'o';
          pcVar1[0x533] = 'r';
          pcVar1[0x534] = '3';
        }
        else {
          if (param_2 != 0xe) goto LAB_01aaa6a7;
          *pcVar1 = '\x04';
          pcVar1[1] = '\x01';
          pcVar1[2] = '\x01';
          *(undefined8 *)(pcVar1 + 8) = param_5;
          *(code **)(pcVar1 + 0x10) = FUN_01aa55d0;
          *(code **)(pcVar1 + 0x18) = FUN_01aa55e0;
          pcVar1[0x530] = '\x04';
          pcVar1[0x531] = 'N';
          pcVar1[0x532] = 'o';
          pcVar1[0x533] = 'r';
          pcVar1[0x534] = '4';
        }
      }
      else if (param_2 == 0x10) {
        *pcVar1 = '\x02';
        pcVar1[1] = '\x01';
        pcVar1[2] = '\x01';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_01aa4d40;
        *(code **)(pcVar1 + 0x18) = FUN_01aa4e10;
        pcVar1[0x530] = '\x04';
        pcVar1[0x531] = 'X';
        pcVar1[0x532] = 'N';
        pcVar1[0x533] = 'o';
        pcVar1[0x534] = 'r';
      }
      else {
        if (param_2 != 0x11) goto LAB_01aaa6a7;
        *pcVar1 = '\x02';
        pcVar1[1] = '\x01';
        pcVar1[2] = '\0';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_01aa55f0;
        *(code **)(pcVar1 + 0x18) = FUN_01aa56a0;
        pcVar1[0x530] = '\x06';
        pcVar1[0x531] = 'D';
        pcVar1[0x532] = 'L';
        pcVar1[0x533] = 'a';
        pcVar1[0x534] = 't';
        pcVar1[0x535] = 'c';
        pcVar1[0x536] = 'h';
      }
    }
    else if (param_2 < 0x16) {
      if (param_2 == 0x15) {
        *pcVar1 = '\x03';
        pcVar1[1] = '\x01';
        pcVar1[2] = '\0';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_01aa6e60;
        *(code **)(pcVar1 + 0x18) = FUN_01aa6e80;
        FUN_01aa7180(*(undefined8 *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8),
                     param_6);
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8) + 0x550) =
             *(undefined8 *)(param_6 + 8);
        pcVar1[0x530] = '\x02';
        pcVar1[0x531] = 'R';
        pcVar1[0x532] = 'S';
      }
      else if (param_2 == 0x13) {
        *pcVar1 = '\x04';
        pcVar1[1] = '\x02';
        pcVar1[2] = '\0';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_01aa5b00;
        *(code **)(pcVar1 + 0x18) = FUN_01aa5c30;
        FUN_01aa7180(*(undefined8 *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8),
                     param_6);
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8) + 0x550) =
             *(undefined8 *)(param_6 + 8);
        pcVar1[0x530] = '\t';
        pcVar1[0x531] = 'D';
        pcVar1[0x532] = 'F';
        pcVar1[0x533] = 'l';
        pcVar1[0x534] = 'i';
        pcVar1[0x535] = 'p';
        pcVar1[0x536] = 'F';
        pcVar1[0x537] = 'l';
        pcVar1[0x538] = 'o';
        pcVar1[0x539] = 'p';
      }
      else {
        if (param_2 != 0x14) goto LAB_01aaa6a7;
        *pcVar1 = '\x05';
        pcVar1[1] = '\x02';
        pcVar1[2] = '\0';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_01aa6000;
        *(code **)(pcVar1 + 0x18) = FUN_01aa6360;
        FUN_01aa7180(*(undefined8 *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8),
                     param_6);
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8) + 0x550) =
             *(undefined8 *)(param_6 + 8);
        pcVar1[0x530] = '\x02';
        pcVar1[0x531] = 'J';
        pcVar1[0x532] = 'K';
      }
    }
    else if (param_2 == 0x16) {
      *pcVar1 = '\x05';
      pcVar1[1] = '\x02';
      pcVar1[2] = '\0';
      *(undefined8 *)(pcVar1 + 8) = param_5;
      *(code **)(pcVar1 + 0x10) = FUN_01aa7230;
      *(code **)(pcVar1 + 0x18) = FUN_01aa7290;
      FUN_01aa7180(*(undefined8 *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8),
                   param_6);
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8) + 0x550) =
           *(undefined8 *)(param_6 + 8);
      pcVar1[0x530] = '\x03';
      pcVar1[0x531] = 'R';
      pcVar1[0x532] = 'S';
      pcVar1[0x533] = 'E';
    }
    else {
      if (param_2 != 0x17) goto LAB_01aaa6a7;
      *pcVar1 = '\x01';
      pcVar1[1] = '\x04';
      pcVar1[2] = '\x01';
      *(undefined8 *)(pcVar1 + 8) = param_5;
      *(code **)(pcVar1 + 0x10) = FUN_01aa75b0;
      *(code **)(pcVar1 + 0x18) = FUN_01aa7760;
      pcVar1[0x530] = '\x03';
      pcVar1[0x531] = 'H';
      pcVar1[0x532] = 'K';
      pcVar1[0x533] = 'P';
      pcVar1[0x560] = '\x02';
      puVar6 = (undefined2 *)
               FUN_01cfde70(*(undefined8 *)(pcVar1 + 0x550),1,1,&local_2a,&local_2b,&local_29);
      pcVar1[0x561] = (char)*puVar6;
    }
  }
  else if (param_2 < 0x25) {
    if (param_2 == 0x24) {
      *pcVar1 = '\x01';
      pcVar1[1] = '\x01';
      pcVar1[2] = '\x01';
      *(undefined8 *)(pcVar1 + 8) = param_5;
      *(code **)(pcVar1 + 0x10) = FUN_014fbc90;
      *(code **)(pcVar1 + 0x18) = FUN_014fbca0;
      pcVar1[0x530] = '\x13';
      pcVar1[0x531] = 'o';
      pcVar1[0x532] = 'p';
      pcVar1[0x533] = 'e';
      pcVar1[0x534] = 'n';
      pcVar1[0x535] = '_';
      pcVar1[0x536] = 'c';
      pcVar1[0x537] = 'o';
      pcVar1[0x538] = 'n';
      pcVar1[0x539] = 't';
      pcVar1[0x53a] = 'r';
      pcVar1[0x53b] = 'o';
      pcVar1[0x53c] = 'l';
      pcVar1[0x53d] = '_';
      pcVar1[0x53e] = 's';
      pcVar1[0x53f] = 'w';
      pcVar1[0x540] = 'i';
      pcVar1[0x541] = 't';
      pcVar1[0x542] = 'c';
      pcVar1[0x543] = 'h';
      pcVar1[0x565] = '\x01';
      FUN_00dae910(*(undefined8 *)(param_1 + 0x13a38),*(undefined2 *)(param_1 + 0x10));
      pcVar1[0x560] = '\x01';
      cVar9 = FUN_01aa16f0(*(undefined8 *)(pcVar1 + 0x550));
      pcVar1[0x561] = cVar9;
    }
    else if (param_2 < 0x1f) {
      if (param_2 == 0x1e) {
        *pcVar1 = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\x01';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_01aa77b0;
        *(code **)(pcVar1 + 0x18) = FUN_01aa7850;
        pcVar1[0x530] = '\x04';
        pcVar1[0x531] = 'D';
        pcVar1[0x532] = 'L';
        pcVar1[0x533] = 'E';
        pcVar1[0x534] = 'D';
        pcVar1[0x560] = '\x03';
        pcVar7 = (char *)FUN_01cfde70(*(undefined8 *)(pcVar1 + 0x550),1,1,&local_2a,&local_2b,
                                      &local_29);
        pcVar1[0x561] = *pcVar7;
      }
      else if (param_2 < 0x1c) {
        if (param_2 == 0x1b) {
          *pcVar1 = '\x04';
          pcVar1[1] = '\x02';
          pcVar1[2] = '\0';
          *(undefined8 *)(pcVar1 + 8) = param_5;
          *(code **)(pcVar1 + 0x10) = FUN_01aa6120;
          *(code **)(pcVar1 + 0x18) = FUN_01aa6780;
          FUN_01aa7180(*(undefined8 *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8),
                       param_6);
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8) + 0x550) =
               *(undefined8 *)(param_6 + 8);
          pcVar1[0x530] = '\x05';
          pcVar1[0x531] = 'J';
          pcVar1[0x532] = 'K';
          pcVar1[0x533] = 'F';
          pcVar1[0x534] = 'F';
          pcVar1[0x535] = 'P';
        }
        else if (param_2 == 0x19) {
          *pcVar1 = '\x01';
          pcVar1[1] = '\x01';
          pcVar1[2] = '\x01';
          *(undefined8 *)(pcVar1 + 8) = param_5;
          *(code **)(pcVar1 + 0x10) = FUN_01aa79d0;
          *(code **)(pcVar1 + 0x18) = FUN_01aa79e0;
          pcVar1[0x530] = '\b';
          pcVar1[0x531] = 'P';
          pcVar1[0x532] = 'u';
          pcVar1[0x533] = 'l';
          pcVar1[0x534] = 'l';
          pcVar1[0x535] = 'U';
          pcVar1[0x536] = 'p';
          pcVar1[0x537] = 'I';
          pcVar1[0x538] = 'R';
        }
        else {
          if (param_2 != 0x1a) goto LAB_01aaa6a7;
          *pcVar1 = '\x01';
          pcVar1[1] = '\x01';
          pcVar1[2] = '\x01';
          *(undefined8 *)(pcVar1 + 8) = param_5;
          *(code **)(pcVar1 + 0x10) = FUN_01aa7a00;
          *(code **)(pcVar1 + 0x18) = FUN_01aa7a10;
          pcVar1[0x530] = '\t';
          pcVar1[0x531] = 'P';
          pcVar1[0x532] = 'u';
          pcVar1[0x533] = 'l';
          pcVar1[0x534] = 'l';
          pcVar1[0x535] = 'U';
          pcVar1[0x536] = 'p';
          pcVar1[0x537] = 'I';
          pcVar1[0x538] = 'R';
          pcVar1[0x539] = '2';
        }
      }
      else if (param_2 == 0x1c) {
        *pcVar1 = '\x04';
        pcVar1[1] = '\x02';
        pcVar1[2] = '\0';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_01aa6240;
        *(code **)(pcVar1 + 0x18) = FUN_01aa6af0;
        FUN_01aa7180(*(undefined8 *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8),
                     param_6);
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8) + 0x550) =
             *(undefined8 *)(param_6 + 8);
        pcVar1[0x530] = '\x05';
        pcVar1[0x531] = 'J';
        pcVar1[0x532] = 'K';
        pcVar1[0x533] = 'F';
        pcVar1[0x534] = 'F';
        pcVar1[0x535] = 'C';
      }
      else {
        if (param_2 != 0x1d) goto LAB_01aaa6a7;
        *pcVar1 = *(char *)(*(longlong *)(pcVar1 + 0x550) + 0x170);
        pcVar1[1] = *(char *)(*(longlong *)(pcVar1 + 0x550) + 0x172);
        pcVar1[2] = '\x01';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_01aa7bf0;
        *(code **)(pcVar1 + 0x18) = FUN_01aa7df0;
        FUN_01aa71c0(*(undefined8 *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8));
        pcVar1[0x530] = '\x03';
        pcVar1[0x531] = 'R';
        pcVar1[0x532] = 'A';
        pcVar1[0x533] = 'M';
      }
    }
    else if (param_2 < 0x22) {
      if (param_2 == 0x21) {
        *pcVar1 = '\x01';
        pcVar1[1] = '\x01';
        pcVar1[2] = '\x01';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_014fbc30;
        *(code **)(pcVar1 + 0x18) = FUN_014fbc40;
        pcVar1[0x530] = '\x10';
        pcVar1[0x531] = 'o';
        pcVar1[0x532] = 'p';
        pcVar1[0x533] = 'e';
        pcVar1[0x534] = 'n';
        pcVar1[0x535] = '_';
        pcVar1[0x536] = 'p';
        pcVar1[0x537] = 'u';
        pcVar1[0x538] = 's';
        pcVar1[0x539] = 'h';
        pcVar1[0x53a] = '_';
        pcVar1[0x53b] = 'b';
        pcVar1[0x53c] = 'u';
        pcVar1[0x53d] = 't';
        pcVar1[0x53e] = 't';
        pcVar1[0x53f] = 'o';
        pcVar1[0x540] = 'n';
        pcVar1[0x565] = '\x01';
        FUN_00dae910(*(undefined8 *)(param_1 + 0x13a38),*(undefined2 *)(param_1 + 0x10));
        pcVar1[0x560] = '\x01';
        pcVar7 = (char *)FUN_01cfde70(*(undefined8 *)(pcVar1 + 0x550),1,1,&local_2a,&local_2b,
                                      &local_29);
        pcVar1[0x561] = *pcVar7;
      }
      else if (param_2 == 0x1f) {
        *pcVar1 = '\x01';
        pcVar1[1] = '\x01';
        pcVar1[2] = '\x01';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_014fbc00;
        *(code **)(pcVar1 + 0x18) = FUN_014fbc10;
        pcVar1[0x530] = '\x0f';
        pcVar1[0x531] = 's';
        pcVar1[0x532] = 'w';
        pcVar1[0x533] = 'i';
        pcVar1[0x534] = 't';
        pcVar1[0x535] = 'c';
        pcVar1[0x536] = 'h';
        pcVar1[0x537] = '_';
        pcVar1[0x538] = 'r';
        pcVar1[0x539] = 'e';
        pcVar1[0x53a] = 'p';
        pcVar1[0x53b] = 'e';
        pcVar1[0x53c] = 'a';
        pcVar1[0x53d] = 't';
        pcVar1[0x53e] = 'e';
        pcVar1[0x53f] = 'r';
        pcVar1[0x565] = '\x01';
        FUN_00dae910(*(undefined8 *)(param_1 + 0x13a38),*(undefined2 *)(param_1 + 0x10));
        pcVar1[0x560] = '\x01';
        pcVar7 = (char *)FUN_01cfde70(*(undefined8 *)(pcVar1 + 0x550),1,1,&local_2a,&local_2b,
                                      &local_29);
        pcVar1[0x561] = *pcVar7;
      }
      else {
        if (param_2 != 0x20) goto LAB_01aaa6a7;
        *pcVar1 = '\x02';
        pcVar1[1] = '\x02';
        pcVar1[2] = '\x01';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_014fbd80;
        *(code **)(pcVar1 + 0x18) = FUN_014fbd90;
        pcVar1[0x530] = '\n';
        pcVar1[0x531] = 'a';
        pcVar1[0x532] = 'l';
        pcVar1[0x533] = 't';
        pcVar1[0x534] = '_';
        pcVar1[0x535] = 's';
        pcVar1[0x536] = 'w';
        pcVar1[0x537] = 'i';
        pcVar1[0x538] = 't';
        pcVar1[0x539] = 'c';
        pcVar1[0x53a] = 'h';
        pcVar1[0x565] = '\x01';
        FUN_00dae910(*(undefined8 *)(param_1 + 0x13a38),*(undefined2 *)(param_1 + 0x10));
        pcVar1[0x560] = '\x01';
        cVar9 = FUN_01aa16f0(*(undefined8 *)(pcVar1 + 0x550));
        pcVar1[0x561] = cVar9;
      }
    }
    else if (param_2 == 0x22) {
      *pcVar1 = '\x01';
      pcVar1[1] = '\x01';
      pcVar1[2] = '\x01';
      *(undefined8 *)(pcVar1 + 8) = param_5;
      *(code **)(pcVar1 + 0x10) = FUN_014fbc60;
      *(code **)(pcVar1 + 0x18) = FUN_014fbc70;
      pcVar1[0x530] = '\x12';
      pcVar1[0x531] = 'c';
      pcVar1[0x532] = 'l';
      pcVar1[0x533] = 'o';
      pcVar1[0x534] = 's';
      pcVar1[0x535] = 'e';
      pcVar1[0x536] = 'd';
      pcVar1[0x537] = '_';
      pcVar1[0x538] = 'p';
      pcVar1[0x539] = 'u';
      pcVar1[0x53a] = 's';
      pcVar1[0x53b] = 'h';
      pcVar1[0x53c] = '_';
      pcVar1[0x53d] = 'b';
      pcVar1[0x53e] = 'u';
      pcVar1[0x53f] = 't';
      pcVar1[0x540] = 't';
      pcVar1[0x541] = 'o';
      pcVar1[0x542] = 'n';
      pcVar1[0x565] = '\x01';
      FUN_00dae910(*(undefined8 *)(param_1 + 0x13a38),*(undefined2 *)(param_1 + 0x10));
      pcVar1[0x560] = '\x01';
      pcVar7 = (char *)FUN_01cfde70(*(undefined8 *)(pcVar1 + 0x550),1,1,&local_2a,&local_2b,
                                    &local_29);
      pcVar1[0x561] = *pcVar7;
    }
    else {
      if (param_2 != 0x23) goto LAB_01aaa6a7;
      *pcVar1 = '\x02';
      pcVar1[1] = '\0';
      pcVar1[2] = '\x01';
      *(undefined8 *)(pcVar1 + 8) = param_5;
      *(code **)(pcVar1 + 0x10) = FUN_014fb620;
      *(code **)(pcVar1 + 0x18) = FUN_014fb6f0;
      pcVar1[0x530] = '\r';
      pcVar1[0x531] = 'c';
      pcVar1[0x532] = 'o';
      pcVar1[0x533] = 'n';
      pcVar1[0x534] = 't';
      pcVar1[0x535] = 'r';
      pcVar1[0x536] = 'o';
      pcVar1[0x537] = 'l';
      pcVar1[0x538] = '_';
      pcVar1[0x539] = 'r';
      pcVar1[0x53a] = 'e';
      pcVar1[0x53b] = 'l';
      pcVar1[0x53c] = 'a';
      pcVar1[0x53d] = 'y';
    }
  }
  else if (param_2 < 0x2b) {
    if (param_2 == 0x2a) {
      *pcVar1 = '\0';
      pcVar1[1] = '\x04';
      pcVar1[2] = '\x01';
      *(undefined8 *)(pcVar1 + 8) = param_5;
      *(code **)(pcVar1 + 0x10) = FUN_014fb2e0;
      *(code **)(pcVar1 + 0x18) = FUN_014fb390;
      pcVar1[0x530] = '\x06';
      pcVar1[0x531] = 'H';
      pcVar1[0x532] = 'e';
      pcVar1[0x533] = 'x';
      pcVar1[0x534] = 'K';
      pcVar1[0x535] = 'e';
      pcVar1[0x536] = 'y';
      pcVar1[0x560] = '\x02';
      puVar6 = (undefined2 *)
               FUN_01cfde70(*(undefined8 *)(pcVar1 + 0x550),1,1,&local_2a,&local_2b,&local_29);
      pcVar1[0x561] = (char)*puVar6;
    }
    else if (param_2 < 0x28) {
      if (param_2 == 0x27) {
        *pcVar1 = '\x02';
        pcVar1[1] = '\0';
        pcVar1[2] = '\x01';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_014fae20;
        *(code **)(pcVar1 + 0x18) = FUN_014faf10;
        pcVar1[0x530] = '\a';
        pcVar1[0x531] = 'D';
        pcVar1[0x532] = 'C';
        pcVar1[0x533] = 'M';
        pcVar1[0x534] = 'o';
        pcVar1[0x535] = 't';
        pcVar1[0x536] = 'o';
        pcVar1[0x537] = 'r';
      }
      else if (param_2 == 0x25) {
        *pcVar1 = '\x01';
        pcVar1[1] = '\x01';
        pcVar1[2] = '\x01';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_014fbcc0;
        *(code **)(pcVar1 + 0x18) = FUN_014fbcd0;
        pcVar1[0x530] = '\x15';
        pcVar1[0x531] = 'c';
        pcVar1[0x532] = 'l';
        pcVar1[0x533] = 'o';
        pcVar1[0x534] = 's';
        pcVar1[0x535] = 'e';
        pcVar1[0x536] = 'd';
        pcVar1[0x537] = '_';
        pcVar1[0x538] = 'c';
        pcVar1[0x539] = 'o';
        pcVar1[0x53a] = 'n';
        pcVar1[0x53b] = 't';
        pcVar1[0x53c] = 'r';
        pcVar1[0x53d] = 'o';
        pcVar1[0x53e] = 'l';
        pcVar1[0x53f] = '_';
        pcVar1[0x540] = 's';
        pcVar1[0x541] = 'w';
        pcVar1[0x542] = 'i';
        pcVar1[0x543] = 't';
        pcVar1[0x544] = 'c';
        pcVar1[0x545] = 'h';
        pcVar1[0x565] = '\x01';
        FUN_00dae910(*(undefined8 *)(param_1 + 0x13a38),*(undefined2 *)(param_1 + 0x10));
        pcVar1[0x560] = '\x01';
        cVar9 = FUN_01aa16f0(*(undefined8 *)(pcVar1 + 0x550));
        pcVar1[0x561] = cVar9;
      }
      else {
        if (param_2 != 0x26) goto LAB_01aaa6a7;
        *pcVar1 = '\x02';
        pcVar1[1] = '\x02';
        pcVar1[2] = '\x01';
        *(undefined8 *)(pcVar1 + 8) = param_5;
        *(code **)(pcVar1 + 0x10) = FUN_014fbd50;
        *(code **)(pcVar1 + 0x18) = FUN_014fbd60;
        pcVar1[0x530] = '\x15';
        pcVar1[0x531] = 'c';
        pcVar1[0x532] = 'h';
        pcVar1[0x533] = 'o';
        pcVar1[0x534] = 'v';
        pcVar1[0x535] = 'e';
        pcVar1[0x536] = 'r';
        pcVar1[0x537] = '_';
        pcVar1[0x538] = 'c';
        pcVar1[0x539] = 'o';
        pcVar1[0x53a] = 'n';
        pcVar1[0x53b] = 't';
        pcVar1[0x53c] = 'r';
        pcVar1[0x53d] = 'o';
        pcVar1[0x53e] = 'l';
        pcVar1[0x53f] = '_';
        pcVar1[0x540] = 's';
        pcVar1[0x541] = 'w';
        pcVar1[0x542] = 'i';
        pcVar1[0x543] = 't';
        pcVar1[0x544] = 'c';
        pcVar1[0x545] = 'h';
        pcVar1[0x565] = '\x01';
        FUN_00dae910(*(undefined8 *)(param_1 + 0x13a38),*(undefined2 *)(param_1 + 0x10));
        pcVar1[0x560] = '\x01';
        cVar9 = FUN_01aa16f0(*(undefined8 *)(pcVar1 + 0x550));
        pcVar1[0x561] = cVar9;
      }
    }
    else if (param_2 == 0x28) {
      *pcVar1 = '\x06';
      pcVar1[1] = '\0';
      pcVar1[2] = '\x01';
      *(undefined8 *)(pcVar1 + 8) = param_5;
      *(code **)(pcVar1 + 0x10) = FUN_014faf40;
      *(code **)(pcVar1 + 0x18) = FUN_014fb0b0;
      pcVar1[0x530] = '\t';
      pcVar1[0x531] = 'S';
      pcVar1[0x532] = 't';
      pcVar1[0x533] = 'e';
      pcVar1[0x534] = 'p';
      pcVar1[0x535] = 'M';
      pcVar1[0x536] = 'o';
      pcVar1[0x537] = 't';
      pcVar1[0x538] = 'o';
      pcVar1[0x539] = 'r';
    }
    else {
      if (param_2 != 0x29) goto LAB_01aaa6a7;
      *pcVar1 = '\x03';
      pcVar1[1] = '\0';
      pcVar1[2] = '\x01';
      *(undefined8 *)(pcVar1 + 8) = param_5;
      *(code **)(pcVar1 + 0x10) = FUN_014fb230;
      *(code **)(pcVar1 + 0x18) = FUN_014fb290;
      pcVar1[0x530] = '\t';
      pcVar1[0x531] = 'S';
      pcVar1[0x532] = 't';
      pcVar1[0x533] = 'o';
      pcVar1[0x534] = 'p';
      pcVar1[0x535] = 'L';
      pcVar1[0x536] = 'i';
      pcVar1[0x537] = 'g';
      pcVar1[0x538] = 'h';
      pcVar1[0x539] = 't';
    }
  }
  else if (param_2 < 0x2e) {
    if (param_2 == 0x2d) {
      *pcVar1 = '\0';
      pcVar1[1] = '\b';
      pcVar1[2] = '\x01';
      *(undefined8 *)(pcVar1 + 8) = param_5;
      *(code **)(pcVar1 + 0x10) = FUN_014fb4e0;
      *(code **)(pcVar1 + 0x18) = FUN_014fb4f0;
      pcVar1[0x530] = '\b';
      pcVar1[0x531] = 'A';
      pcVar1[0x532] = 's';
      pcVar1[0x533] = 'c';
      pcVar1[0x534] = 'i';
      pcVar1[0x535] = 'i';
      pcVar1[0x536] = 'K';
      pcVar1[0x537] = 'e';
      pcVar1[0x538] = 'y';
      pcVar1[0x560] = '\x02';
      puVar6 = (undefined2 *)
               FUN_01cfde70(*(undefined8 *)(pcVar1 + 0x550),1,1,&local_2a,&local_2b,&local_29);
      pcVar1[0x561] = (char)*puVar6;
    }
    else if (param_2 == 0x2b) {
      *pcVar1 = '\x04';
      pcVar1[1] = '\0';
      pcVar1[2] = '\x01';
      *(undefined8 *)(pcVar1 + 8) = param_5;
      *(code **)(pcVar1 + 0x10) = FUN_014fbdb0;
      *(code **)(pcVar1 + 0x18) = FUN_014fbe40;
      pcVar1[0x530] = '\n';
      pcVar1[0x531] = 'H';
      pcVar1[0x532] = 'e';
      pcVar1[0x533] = 'x';
      pcVar1[0x534] = 'D';
      pcVar1[0x535] = 'i';
      pcVar1[0x536] = 's';
      pcVar1[0x537] = 'p';
      pcVar1[0x538] = 'l';
      pcVar1[0x539] = 'a';
      pcVar1[0x53a] = 'y';
    }
    else {
      if (param_2 != 0x2c) goto LAB_01aaa6a7;
      *pcVar1 = '\b';
      pcVar1[1] = '\0';
      pcVar1[2] = '\x01';
      *(undefined8 *)(pcVar1 + 8) = param_5;
      *(code **)(pcVar1 + 0x10) = FUN_014fbee0;
      *(code **)(pcVar1 + 0x18) = FUN_014fbf70;
      pcVar1[0x530] = '\f';
      pcVar1[0x531] = 'A';
      pcVar1[0x532] = 's';
      pcVar1[0x533] = 'c';
      pcVar1[0x534] = 'i';
      pcVar1[0x535] = 'i';
      pcVar1[0x536] = 'D';
      pcVar1[0x537] = 'i';
      pcVar1[0x538] = 's';
      pcVar1[0x539] = 'p';
      pcVar1[0x53a] = 'l';
      pcVar1[0x53b] = 'a';
      pcVar1[0x53c] = 'y';
    }
  }
  else if (param_2 == 0x2e) {
    *pcVar1 = '\x02';
    pcVar1[1] = '\0';
    pcVar1[2] = '\x01';
    *(undefined8 *)(pcVar1 + 8) = param_5;
    *(code **)(pcVar1 + 0x10) = FUN_014fb500;
    *(code **)(pcVar1 + 0x18) = FUN_014fb5f0;
    pcVar1[0x530] = '\x04';
    pcVar1[0x531] = 'B';
    pcVar1[0x532] = 'u';
    pcVar1[0x533] = 'l';
    pcVar1[0x534] = 'b';
  }
  else {
    if (param_2 != 0x2f) {
LAB_01aaa6a7:
      uVar5 = FUN_00b89270();
      FUN_00b8e520(uVar5,&local_50,0x503);
      FUN_00414ad0(DAT_02110a68,local_50);
      FUN_01aa37d0(1,&DAT_02110a68);
      goto LAB_01aaa7f8;
    }
    *pcVar1 = '\x02';
    pcVar1[1] = '\0';
    pcVar1[2] = '\x01';
    *(undefined8 *)(pcVar1 + 8) = param_5;
    *(code **)(pcVar1 + 0x10) = FUN_014fb880;
    *(code **)(pcVar1 + 0x18) = FUN_014fb930;
    pcVar1[0x530] = '\x03';
    pcVar1[0x531] = 'L';
    pcVar1[0x532] = 'e';
    pcVar1[0x533] = 'd';
  }
  uVar2 = FUN_01d3e3e0(*(undefined8 *)
                        (*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8)
                        + 0x550),1);
  *(undefined1 *)
   (*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8) + 0x563) = uVar2;
  uVar2 = FUN_01d3e3e0(*(undefined8 *)
                        (*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8)
                        + 0x550),2);
  *(undefined1 *)
   (*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8) + 0x564) = uVar2;
  pcVar1 = *(char **)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8);
  bVar8 = 1;
  for (cVar9 = *pcVar1; cVar9 != '\0'; cVar9 = cVar9 + -1) {
    uVar3 = FUN_01aa8f70(param_1,*param_3);
    *(undefined2 *)(pcVar1 + (ulonglong)bVar8 * 2 + 0x41f6) = uVar3;
    bVar8 = bVar8 + 1;
    param_3 = param_3 + 1;
  }
  bVar8 = 1;
  for (cVar9 = pcVar1[1]; cVar9 != '\0'; cVar9 = cVar9 + -1) {
    uVar3 = FUN_01aa8f70(param_1,*param_4);
    *(undefined2 *)(pcVar1 + (ulonglong)bVar8 * 2 + 0x4236) = uVar3;
    bVar8 = bVar8 + 1;
    param_4 = param_4 + 1;
  }
  FUN_01aa8050(*(undefined8 *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8));
  local_54 = (uint)*(ushort *)(param_1 + 0x10);
LAB_01aaa7f8:
  FUN_00414560(&local_50,3);
  return local_54;
}

